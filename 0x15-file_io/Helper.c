#include "main.h"
/**
*print_elf_header_info - prints elf header
*@filename: file
*Return: void
**/
void print_elf_header_info(const char *filename)
{
int fd = open(filename, O_RDONLY), i;
Elf64_Ehdr elf_header;
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Cannot open file %s\n", filename);
exit(98);
}
if (read(fd, &elf_header, sizeof(elf_header)) != sizeof(elf_header))
{
dprintf(STDERR_FILENO, "Error: Cannot read ELF header from file %s\n", filename);
close(fd);
exit(98);
}
if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
elf_header.e_ident[EI_MAG3] != ELFMAG3) {
dprintf(STDERR_FILENO, "Error: %s is not an ELF file\n", filename);
close(fd);
exit(98);
}

printf("ELF Header:\n");
printf("  Magic:   ");
for (i = 0; i < EI_NIDENT; i++) {
printf("%02x ", elf_header.e_ident[i]);
}
printf("\n");
printf("  Class:                             %s\n", elf_header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
printf("  Data:                              %s\n", elf_header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
printf("  Version:                           %d (current)\n", elf_header.e_ident[EI_VERSION]);
printf("  OS/ABI:                            %s\n", elf_header.e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Other");
    printf("  ABI Version:                       %d\n", elf_header.e_ident[EI_ABIVERSION]);
    printf("  Type:                              %s\n", elf_header.e_type == ET_EXEC ? "EXEC (Executable file)" : "Other");
    printf("  Entry point address:               %lx\n", (unsigned long)elf_header.e_entry);

close(fd);
}
