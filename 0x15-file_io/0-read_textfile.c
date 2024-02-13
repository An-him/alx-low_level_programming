#include "main.h"
/**
*read_textfile - reads a text file prints it to the POSIX standard output.
*@filename: is the filename to read
*@letters: How many letters to read.
*Return: ssize_t
**/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, lengthRead;
char *buffer;
ssize_t LetterCount;


fd = open(filename, O_RDONLY);
buffer = malloc(sizeof(char) * letters);
lengthRead = read(fd, buffer, letters);
close(fd);

LetterCount = write(STDOUT_FILENO, buffer, lengthRead);
free(buffer);
return (LetterCount);
}
