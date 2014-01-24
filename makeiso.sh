#!/bin/bash
echo "[+] Copying urco.bin to isodir"
cp src/urco.bin isodir/boot/urco.bin
echo "[+] Copying grub.cfg to isodir"
cp grub/grub.cfg isodir/boot/grub/grub.cfg
echo "[+] Making the iso image"
grub-mkrescue -o urco.iso isodir
