# cmake-tutorial

# Requirements

## Setup development environment

Before opening VS Code, setup the Software Development environment by souring the Yocto SDK shell script.

`source <path to SDK installation>/environment-setup-aarch64-xilinx-linux`

This will define a number of environment variable used for build tool chains, particularly also a variable named `OE_CMAKE_TOOLCHAIN_FILE` which the VS Code IDE will automatically use when involving the CMake build tool.

## VS Code IDE

Required extensions for VS Code are "ms-vscode.cpptools" and "ms-vscode.cpptools-extension-pack".

