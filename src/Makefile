AS = nasm
CC = i586-elf-gcc
#Linking could be done with i586-elf-ld, but this prevents the compiler
#from doing many tasks during linking
LD = i586-elf-gcc 

BOOT_OBJ = boot.o
KERNEL_OBJ = kernel.o
VIDEO_OBJ = video.o
STRING_OBJ = string.o

all:
#Assemble boot.asm , the entry point of the kernel
	$(AS) -felf boot.asm -o $(BOOT_OBJ) 

#Compile the kernel
	$(CC) -c kernel.c -std=gnu99 -ffreestanding -O2 -Wall -Wextra -o $(KERNEL_OBJ)
	$(CC) -c video.c -std=gnu99 -ffreestanding -O2 -Wall -Wextra -o $(VIDEO_OBJ)
	$(CC) -c string.c -std=gnu99 -ffreestanding -O2 -Wall -Wextra -o $(STRING_OBJ)

#Link the kernel
	$(CC) -T linker.ld -o urco.bin -lgcc -ffreestanding -O2 -nostdlib \
	$(BOOT_OBJ) $(KERNEL_OBJ) $(VIDEO_OBJ) $(STRING_OBJ)

clean:
	rm $(BOOT_OBJ) $(KERNEL_OBJ) $(VIDEO_OBJ) $(STRING_OBJ) urco.bin
