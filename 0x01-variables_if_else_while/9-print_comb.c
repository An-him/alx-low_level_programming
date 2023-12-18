#include <stdio.h>
/**
*main - entry point
*Return: 0
**/
int main(void)
{
int numbr = 48, space = 32, comma = 44;
while (numbr <= 57)
{
putchar(numbr);
if (numbr != 57)
{
putchar(comma);
putchar(space);
}
numbr++;
}
putchar(10);
return (0);
}
