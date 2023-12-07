#include "main.h"
#include <stdlib.h>

/**
* read_textfile - reads a text file and prints it to the POSIX
* @filename: is the file to create
* @letters: is the number of letters
* Return: the actual number of letters
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_d;
	ssize_t tmp;
	ssize_t res;

	file_d = open(filename, O_RDONLY);

	if (file_d == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	res = read(file_d, buffer, letters);
	tmp = write(STDOUT_FILENO, buffer, res);

	free(buffer);
	close(file_d);
	return (tmp);
}
