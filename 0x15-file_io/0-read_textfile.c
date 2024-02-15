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

LetterCount = 0;
fp = open(filename, O_RDONLY);
write(1, fgetc,letters);
close(fp);
return (LetterCount);
}
