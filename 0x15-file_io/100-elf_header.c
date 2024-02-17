#include "main.h"
/**
*main - prints ELF
*@argc: count
*@argv: vector
*Return: int
**/
int main(int argc, char *argv[])
{
if (argc != 2)
{
dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
return (98);
}
print_elf_header_info(argv[1]);
return (0);
}
