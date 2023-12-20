#include "main.h"
/**
*print_alphabet -function prints alphabet in lowercase, followed by a new line.
*Return: void
**/
void print_alphabet_x10(void)
{
int i = 0;
char alpha;
while (i < 10)
{
alpha = 'a';
while (alpha <= 'z')
{
_putchar(alpha);
alpha++;
}
i++;
_putchar('\n');
}
}
