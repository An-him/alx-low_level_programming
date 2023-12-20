#include "main.h"
/**
*_islower - function that checks for lowercase character
*@c: return 1 if lowercase, else 0
*Return: int
**/
int _islower(int c)
{
if (c > 97 && c < 122)
{
return (1);
}
return (0);
}
