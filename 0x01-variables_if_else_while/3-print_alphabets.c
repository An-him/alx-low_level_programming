#include <stdio.h>
/**
*main - entry point
*Return: 0
**/
int main(void)
{
int alpha = 97, Alpha = 65;
while(alpha <= 122)
{
putchar(alpha);
alpha++;
}
while(Alpha <= 90)
{
putchar(Alpha);
Alpha++;
}
putchar(10);
return (0);
}
