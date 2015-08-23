# Programming Arduino with PlatformIO [![Build Status](https://travis-ci.org/nichtich/platformio-arduino.svg?branch=master)](https://travis-ci.org/nichtich/platformio-arduino)

This project illustrates programming Arduino with
[PlatformIO](https://platformio.org). 

## Installation

Tested with Ubuntu 15.04.

1. Install Platformio in user space

        sudo apt-get install python3-pip

        pip install --user --egg scons
        pip install --user platformio

        vim ~/.bashrc  # add ~/.local/bin to $PATH

        platformio

2. Allow default user to write to USB

        sudo usermod -a -G dialout `whoami`

3. Login and logout again for changes to take effect.

## Usage

Compile

    platformio run

Upload

    platformio run --target upload

