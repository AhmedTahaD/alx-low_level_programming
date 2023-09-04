#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- reads a text file and prints it to the POSIX standard output.
 * @filename: text file to read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file;
	ssize_t write_file;
	ssize_t read_file;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	read_file = read(fd, buf, letters);
	write_file = write(STDOUT_FILENO, buf, t);

	free(buffer);
	close(file);
	return (write_file);
}
