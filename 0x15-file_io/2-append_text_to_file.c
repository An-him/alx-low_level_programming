#include "main.h"
/**
*append_text_to_file - appends text to file
*@filename: file to read
*@text_content: text to append
*Return: int
**/
int append_text_to_file(const char *filename, char *text_content)
{
int fp;
int CharsWritten;
int i;

if (filename == NULL)
{
return (-1);
}
if (text_content == NULL)
{
return (1);
}
fp = open(filename, O_WRONLY | O_APPEND);
if (fp == -1)
{
return (-1);
}



for (i = 0; text_content[i]; i++)
{
}
CharsWritten = write(fp, text_content, i);
if (CharsWritten == -1)
{
close(fp);
return (-1);
}
close(fp);
return (1);
}
