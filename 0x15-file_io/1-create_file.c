#include "main.h"
/**
*create_file - creates file
*@filename: file to be created
*@text_content: To fill in the filename
*Return: int
**/
int create_file(const char *filename, char *text_content)
{
int fp;
ssize_t CharsRead;

CharsRead = 0;
if (filename == NULL)
{
return (-1);
}

fp = open(filename, O_CREAT, S_IRUSR | S_IWUSR);
if (fp == -1)
{
return (-1);
}

CharsRead = write(fp, text_content, strlen(text_content));
if (CharsRead == -1)
{
return (1);
}
fp = close(fp);
return (0);
}
