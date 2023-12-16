#include <stdio.h>
/**
*main - entry point
*Return: 0
**/
int main(void)
{
int alpha = 97;
while (alpha <= 122)
{
putchar(alpha);
alpha++;
if (alpha == 113 || alpha == 101)
{
alpha++;
}
}
putchar(10);
return (0);
}
