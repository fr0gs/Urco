#!/bin/bash
#This in totally imaginary case that I might use x86_64 testing.. 
#Probably I'll remove it in a while
QEMU=qemu-system-i386
TARGET=urco

#Using cdrom emulation with the iso
$QEMU -cdrom $TARGET.iso

#Booting kernel directly without bootable medium
#$QEMU -kernel $TARGET.bin
