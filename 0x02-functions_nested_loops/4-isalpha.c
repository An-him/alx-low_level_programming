#include "main.h"
/**
*_isalpha - function that checks for lowercase character
*@c: return 1 if lowercase, else 0
*Return: int
**/
int _isalpha(int c)
{
if ((c > 97 && c < 122) || (c > 65 && c < 90))
{
return (1);
}
return (0);
}
