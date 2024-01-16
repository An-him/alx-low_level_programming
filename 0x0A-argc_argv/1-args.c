#include "main.h"
/**
*main - entry point
*@ac: argument count
*@av: pointer to an array of chars
*Return: int
**/
int main(int ac, char __attribute__((__unused__)) **av)
{
printf("%i\n", ac - 1);
exit(EXIT_SUCCESS);
}
