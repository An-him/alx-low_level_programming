#include "main.h"
/**
*main - entry point
*Return: 0
**/
int main(void)
{
int i = 1;
for (; i <= 100; i++)
{
if (i % 5 == 0 && i % 3 == 0)
{
printf("FizzBuzz ");
continue;
}
else if (i % 3 == 0)
{
printf("Fizz ");
continue;
}
else if (i % 5 == 0)
{
printf("Buzz ");
continue;
}
printf("%i ", i);
}
printf("\n");
return (0);
}
