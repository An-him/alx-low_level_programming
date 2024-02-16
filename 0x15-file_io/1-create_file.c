#include "main.h"
/**
 * create_file - creates file
 * @filename: file to be created
 * @text_content: content to be written to the file
 * Return: 1 on success, -1 on failure
 **/
int create_file(const char *filename, char *text_content)
{
int fp, i;
ssize_t CharsWritten;

if (filename == NULL)
{
return (-1);
}

fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
if (fp == -1)
{
return (-1);
}

if (text_content != NULL)
{
for (i = 0; text_content[i]; i++)
{
}
CharsWritten = write(fp, text_content, i);
if (CharsWritten == -1)
{
close(fp);
return (-1);
}
}
close(fp);
return (1);
}
