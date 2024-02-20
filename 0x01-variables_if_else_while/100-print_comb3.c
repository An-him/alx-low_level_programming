#include <stdio.h>
/**
*main - entry point
*Return: 0
**/
int main(void)
{
int numbr1 = 48, space = 32, comma = 44, numbr2 = 48;
for (; numbr1 < 58; ++numbr1)
{
for (numbr2 = numbr1 + 1; numbr2 < 58; ++numbr2)
{
putchar(numbr1);
putchar(numbr2);
if (numbr1 != 56 || numbr2 != 57)
{
putchar(comma);
putchar(space);
}
}
}
putchar(10);
return (0);
}
