nasm -f elf64 asm/main.asm
ld -s -o asm/a.out asm/main.o
./asm/a.out
rm asm/*.o
rm asm/a.out