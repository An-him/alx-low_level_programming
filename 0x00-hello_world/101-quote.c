#include <unistd.h>
/**
*main - entry point
*
*Return: 0
*
**/
int main(void)
{
char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
write(STDOUT_FILENO, str, sizeof(str));
write(STDOUT_FILENO, "\n", 1);
return (1);
}
