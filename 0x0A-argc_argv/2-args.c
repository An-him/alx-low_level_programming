#include "main.h"
/**
*main - prints all the args given supplied to it.
*@argc: argument count
*@argv: arguemnt strings
*Return: int
**/
int main(int argc, char **argv)
{
while (argc--)
{
printf("%s\n", *argv);
argv++;
}
exit(EXIT_SUCCESS);
}
