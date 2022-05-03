#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
* read_textfile -Function that reads a text file and prints it to the POSIX
* standard output
*@filename: name of the file to read
*@letters: number of letters should read and print
*Return: the actual number of letters it could read and print_
* .if the file can not be opened or read return 0
* .if filename is NULL return 0
*. if write fails or does not write expected amunt of bytes, return 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, readfile, writefile;
	char buff;
	unsigned int i;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDWR);
	if (file == -1)
		return (0);

	readfile = read(file, &buff, 1);
	if (readfile == -1)
		return (0);

	for (i = 0; readfile != 0 && i != letters; i++)
	{
		writefile = write(STDOUT_FILENO, &buff, 1);
		if (writefile == -1)
			return (0);
		readfile = read(file, &buff, 1);
		if (readfile == -1)
			return (0);
	}

	readfile = close(file);
	if (readfile == -1)
		return (0);

	return (i);
}
