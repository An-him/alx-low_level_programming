
#include "main.h"
/**
*main - copies file to file
*@argc: count
*@argv: vector
*Return: int
**/
int main(int argc, char *argv[])
{
int fd_from, fd_to, bytes_read, bytes_written;
char buffer[BUFFER_SIZE];

if (argc != 3)
{
error_exit(97, "Usage: %s file_from file_to\n", argv[0]);
}

fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
{
error_exit(98, "Error: Can't read from file %s\n", argv[1]);
}

fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0666);
if (fd_to == -1)
{
error_exit(99, "Error: Can't write to %s\n", argv[2]);
}
while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1)
{
error_exit(99, "Error: Can't write to %s\n", argv[2]);
}
}
if (bytes_read == -1)
{
error_exit(98, "Error: Can't read from file %s\n", argv[1]);
}
if (close(fd_from) == -1)
{
error_exit(100, "Error: Can't close fd %d\n", fd_from);
}
if (close(fd_to) == -1)
{
error_exit(100, "Error: Can't close fd %d\n", fd_to);
}
return (0);
}

