#include "main.h"

/**
 * _length - computes the length of a string.
 * @str: input string
 * Return: is the length of the string, -1 if the input is NULL
 */
ssize_t _length(const char *str)
{
	ssize_t size = 0;

	if (str == NULL)
	return (-1);

	while (str[size] != '\0')
	size++;
	return (size);
}

/**
 * create_file - is a function that creates a file
 * filename: is a file to create
 * text_content:  is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int file_d = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	ssize_t write_result;

	if (filename == NULL)
	{
	return (-1);
	}
	if (file_d == -1)
	{
	return (-1);
	}
	if (text_content != NULL)
	{
		write_result = write(file_d, text_content, _length(text_content));
	if (write_result == -1)
	{
		close(file_d);
		return (-1);
	}
	}
	close(file_d);
	return (1);
}
