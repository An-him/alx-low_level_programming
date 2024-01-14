#include "main.h"
/**
*main - entry point
*@ac: argument count
*@av: pointer to an array of chars
*Return: int
**/
int main(int __attribute__((__unused__)) ac, char **av)
{
printf("%s", *av);
putchar(10);
exit(EXIT_SUCCESS);
}
