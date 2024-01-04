#include "main.h"
/**
*puts2 - print every other char of string, starting with first character
*@str: string in question
*Return: void
**/
void puts2(char *str)
{
int length = 0, i;
while (str[length] != '\0')
{
length++;
}
i = 0;
while (i < length)
{
printf("%c", str[i]);
i += 2;
}
putchar(10);
}
