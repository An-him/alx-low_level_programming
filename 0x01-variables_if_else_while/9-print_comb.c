#include <stdio.h>
/**
*main - entry point
*Return: 0
**/
int main(void)
{
int numbr = 48, underscore = 32, comma = 44;
while (numbr <= 57)
{
putchar(numbr);
putchar(comma);
putchar(underscore);
++numbr;
if (numbr == 57)
{
comma = comma - 44;
underscore = underscore - 10;
}
}
putchar(10);
return (0);
}
