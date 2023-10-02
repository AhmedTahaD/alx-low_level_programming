#include "main.h"
/**
 * read_textfile- reads a text file and prints it to the POSIX standard output.
 * @filename: text file to read
 * @letters: number of letters to be read
 * Return: actual number of letters read and printed
 *        0 when write fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fp;
	ssize_t write_file;
	ssize_t read_file;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	read_file = read(fp, buffer, letters);
	write_file = write(STDOUT_FILENO, buffer, read_file);

	free(buffer);
	close(fp);
	return (write_file);
}
