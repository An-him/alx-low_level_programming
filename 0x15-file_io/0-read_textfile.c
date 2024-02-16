#include "main.h"
/**
*read_textfile - reads a text file prints it to the POSIX standard output.
*@filename: is the filename to read
*@letters: How many letters to read.
*Return: ssize_t
**/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fp;
ssize_t LetterCount;
char *buffer;
ssize_t charsread;

LetterCount = 0;
if (filename == NULL)
{
return (0);
}
fp = open(filename, O_RDONLY);
if (fp == -1)
return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
close(fp);
return (0);
}

charsread = read(fp, buffer, letters);
if (charsread == -1)
return (0);

LetterCount = write(STDOUT_FILENO, buffer, charsread);

if (LetterCount == -1)
{
free(buffer);
close(fp);
return (0);
}

close(fp);
free(buffer);
return (LetterCount);
}
