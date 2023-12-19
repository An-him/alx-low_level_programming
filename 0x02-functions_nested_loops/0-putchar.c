#include "main.h"
/**
*main - entry point
*Return: 0
**/
int main(void)
{
int i = 0;
char word[] = "_putchar";
while (word[i] != '\0')
{
_putchar(word[i]);
i++;
}
_putchar('\n');
return (0);
}
