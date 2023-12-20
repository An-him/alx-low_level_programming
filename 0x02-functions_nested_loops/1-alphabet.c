#include "main.h"
/**
*print_alphabet -function prints alphabet in lowercase, followed by a new line.
*Return: void
**/
void print_alphabet(void)
{
char alpha = 'a';
while (alpha <= 'z')
{
_putchar(alpha);
alpha++;
}
_putchar('\n');
}

