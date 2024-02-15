#include "main.h"
/**
*rev_string - function reverses a string
*@s: string reverse
*Return: String in reverse
**/
void rev_string(char *s)
{
int length, startofstring, end;
char temp;
length  = 0;
while (s[length] != '\0')
{
length++;
}
startofstring = 0;
end = length - 1;

while (startofstring < end)
{
temp = s[startofstring];
s[startofstring] = s[end];
s[end] = temp;
startofstring++;
end--;
}
}

