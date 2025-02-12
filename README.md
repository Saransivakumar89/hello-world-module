# hello-world-module

Description

This is a simple Linux kernel module that prints "Hello, World!" when loaded and "Goodbye" when unloaded.  
It serves as an introduction to writing and loading kernel modules.

Features

- Demonstrates basic kernel module creation
- Shows how to use `printk` for logging
- Explains how to load and unload a module using `insmod` and `rmmod`

Prerequisites

`- Linux system with kernel headers installed`
`- Basic knowledge of compiling kernel modules`

Compilation :
 Makefile - `make`

Load the module:

`sudo insmod main.ko`

Check kernel logs:

`dmesg | tail`

Remove the module:

`sudo rmmod main.ko`


  
