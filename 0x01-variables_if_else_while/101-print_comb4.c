#include <stdio.h>
/**
*main - entry point
*Return: 0
**/
int main(void)
{
int numbr1 = 48, space = 32, comma = 44, numbr2 = 48, number3 = 49;
for (; numbr1 < 58; ++numbr1)
{
for (numbr2 = numbr1 + 1; numbr2 < 58; ++numbr2)
{
for (number3 = numbr2 + 1; number3 < 58; ++number3)
{
putchar(numbr1);
putchar(numbr2);
putchar(number3);
if (numbr1 != 55 || numbr2 != 56 || number3 != 57)
{
putchar(comma);
putchar(space);
}
}
}
}
putchar(10);
return (0);
}
