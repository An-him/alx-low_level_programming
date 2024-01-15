#include "main.h"
/**
*main - prints all the args given supplied to it.
*@argc: argument count
*@argv: arguemnt strings
*Return: int
**/
int main(int argc, char __attribute__((unused)) **argv)
{
int i, j, l;
if (argc != 3)
{
printf("Error\n");
return (1);
}
i = atoi(argv[1]);
j = atoi(argv[2]);
l = i * j;
printf("%i\n", l);
exit(EXIT_SUCCESS);
}
