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
if (i % 3 == 0)
{
printf("Fizz ");
continue;
}
else if (i % 5 == 0)
{
printf("Buzz ");
continue;
}
else if (i % 5 == 0 || i % 3 == 0)
{
printf("FizzBuzz");
continue;
}
printf("%i ", i);
}
return (0);
}
