# ROS2 Tank Robot

## Overview

This project implements a custom software stack for a tank robot platform using ROS 2 (Robot Operating System). The hardware platform is based on a commercially available robot chassis ([available here](https://www.amazon.nl/dp/B0BNDQFRP1?ref=ppx_yo2ov_dt_b_fed_asin_title)) designed for the Raspberry Pi.

<img width="823" height="823" alt="Tank Robot Hardware" src="https://github.com/user-attachments/assets/f220cae1-ecaf-449f-8ec4-2d8ae5945ca2" />

### Hardware Platform

- **Controller**: Raspberry Pi 5 (8 GB)
- **Base**: Tank chassis with motor controller
- **Camera**: Pi Camera Module

While the chassis includes proprietary software, this project uses it purely as a hardware platform with a completely custom ROS 2-based software implementation.

## Software Architecture

This project uses [ROS 2 Kilted Kaiju](https://docs.ros.org/en/kilted/Installation.html), which requires Ubuntu 24.04 as per [REP 2000](https://reps.openrobotics.org/rep-2000/#kilted-kaiju-may-2025---november-2026).

### Dependency Management

The project leverages [Pixi](https://pixi.prefix.dev/latest/) for streamlined dependency management. All dependencies, including ROS 2 itself, are configured in the `pixi.toml` file, which simplifies deployment across different target platforms.

## Raspberry Pi Setup

The setup process requires special attention due to known incompatibilities between Ubuntu 24.04 libraries and Raspberry Pi 5 hardware, particularly regarding camera support. 

### Prerequisites

- Raspberry Pi 5 with Ubuntu 24.04 Desktop installed
- Pi Camera Module

### Installation Steps

#### 1. Complete Initial Ubuntu Installation

Follow the standard Ubuntu 24.04 Desktop installation process.

#### 2. Initial Reboot

Reboot the system after installation to ensure APT functions correctly.

```bash
sudo reboot
```

#### 3. Configure Power Management (Optional)

If not using the official Raspberry Pi power supply, apply the throttling fix to prevent performance issues. See the [detailed guide](https://pimylifeup.com/raspberry-pi-5-ubuntu-performance/) for instructions.

#### 4. System Updates

Update all system packages to the latest versions:

```bash
sudo apt update
sudo apt upgrade
```

#### 5. SSH Server Configuration

Install and enable the SSH server for remote access:

```bash
sudo apt install openssh-server
sudo systemctl enable --now ssh
sudo systemctl status ssh
```

#### 6. Video Group Membership

Add your user to the video group for camera access:

```bash
sudo usermod -aG video <username>
```

**Note**: Replace `<username>` with your actual username.

#### 7. Camera Software Installation

Install Raspberry Pi-specific camera drivers and tools. This is critical as Ubuntu's default camera stack is incompatible with Pi 5 hardware:

```bash
sudo add-apt-repository ppa:marco-sonic/rasppios
sudo apt update 
sudo apt upgrade
sudo apt install libcamera-tools rpicam-apps-lite python3-picamera2
```

#### 8. Camera Verification

Test the camera using rpicam-still:

```bash
rpicam-still -o test.jpg
```

#### 9. DMA Heap Permissions Fix

Configure DMA heap permissions to enable camera preview in desktop environments:

```bash
sudo touch /etc/udev/rules.d/pi_cam.rules
sudo nano /etc/udev/rules.d/pi_cam.rules
```

Add the following line to the file:

```
SUBSYSTEM=="dma_heap", GROUP="video", MODE="0660"
```

Save the file and reboot the system for changes to take effect.

#### 10. Picamera2 Functionality Test

Verify Picamera2 functionality with the following Python script:

```python
from picamera2 import Picamera2

picam2 = Picamera2()
config = picam2.create_still_configuration()
picam2.configure(config)

picam2.start()

np_array = picam2.capture_array()
print(np_array)
picam2.capture_file("demo.jpg")
picam2.stop()
```

#### 11. Boot Configuration (If Required)

If camera detection issues persist, modify the boot configuration:

Edit `/boot/firmware/config.txt` and add:

```
camera_auto_detect=0
dtoverlay=ov5647,cam0
```

Reboot after making these changes.

## Building the Project

### Raspberry Pi and Linux

Build the project using the Pixi task system:

```bash
pixi run build
```

### Windows Development Environment

When building on Windows, you must execute the build command from a Visual Studio Developer Command Prompt. This requires Visual Studio Build Tools (version 2022 recommended) to be installed.

```bash
pixi run build
```

## Deployment

### Raspberry Pi Service Configuration

The robot software can be configured to start automatically on boot using a systemd service.

#### Service Installation

1. Copy the service file to the systemd directory:

```bash
sudo cp misc/tank-robot.service /etc/systemd/system/
```

2. Reload systemd to recognize the new service:

```bash
sudo systemctl daemon-reload
```

3. Enable the service to start on boot:

```bash
sudo systemctl enable tank-robot.service
```

4. Start the service immediately (optional):

```bash
sudo systemctl start tank-robot.service
```

**Important**: The service file contains hardcoded paths referencing a specific user's home directory. You may need to edit the service file to match your system configuration before installation.

### User Interface (Windows)

The user interface application runs on a Windows development machine and communicates with the robot over the network.

#### Running the UI

Execute the following command to start the user interface:

```bash
pixi run run_user_interface
```

#### Features

The user interface provides:
- **Live Camera Feed**: Real-time video streaming from the robot's camera
- **Joystick Control**: Tank control via connected game controllers (e.g., PlayStation controller via Bluetooth)

Ensure your controller is properly paired and connected before launching the interface.

## Project Structure

```
├── src/                          # ROS 2 package source code
│   ├── camera/                   # Camera interface package
│   ├── motion_controller/        # Motor control package
│   ├── tank_bringup/            # Launch files and configuration
│   ├── tank_interfaces/         # Custom ROS 2 message definitions
│   ├── user_interface/          # UI application
│   └── user_interface_bringup/  # UI launch configuration
├── build/                        # Build artifacts
├── install/                      # Installed ROS 2 packages
├── log/                         # Build and runtime logs
├── misc/                        # Miscellaneous files (systemd service, etc.)
├── pixi.toml                    # Pixi dependency configuration
└── README.md                    # This file
```

## Contributing

When making changes to the project, ensure all modifications are tested on both the Raspberry Pi target and the development machine before committing.

## License

See [LICENSE](LICENSE) for details. 





