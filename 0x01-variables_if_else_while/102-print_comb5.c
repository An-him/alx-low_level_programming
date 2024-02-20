#include <stdio.h>
/**
*main - entry point
*Return: 0
**/
int main(void)
{
int numbr1 = 48, numbr2 = 48, number3 = 49, number4 = 48, space = 32, comma = 44;
for (; numbr1 < 58; ++numbr1)
{
for (numbr2 = numbr1; numbr2 < 58; ++numbr2)
{
for (number3 = numbr2; number3 < 58; ++number3)
{
for (number4 = number3; number4 < 58; ++number4)
{
putchar(numbr1);
putchar(numbr2);
putchar(32);
putchar(number3);
putchar(number4);
if (numbr1 != 57 || numbr2 != 57 || number3 != 57 || number4 != 57)
{
putchar(comma);
putchar(space);
}
}
}
}
}
putchar(10);
return (0);
}
