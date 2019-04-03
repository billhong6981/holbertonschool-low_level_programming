#include "holberton.h"
/**
 * read_textfile - a function that reads a text file and prints it
 * to the POSIX standard output.
 * @filename: a filename string
 * @letters: unsigned int number of letters should read and print
 *
 * Return: return the number of letters it could read and print, 0 if fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t open_file, total, read_status;
	char buffer[BUFFER_SIZE];

	if (filename == NULL)
		return (0);
	open_file = open(filename, O_RDONLY);
	if (open_file == -1)
		return (0);
	total = 0;
	read_status = 1;
	while (letters > BUFFER_SIZE && read_status != 0)
	{
		read_status = read(open_file, buffer, BUFFER_SIZE);
		write(STDOUT_FILENO, buffer, read_status);
		total += read_status;
		letters -= BUFFER_SIZE;
	}
	read_status = read(open_file, buffer, letters);
	write(STDOUT_FILENO, buffer, read_status);
	total += read_status;
	close(open_file);
	return (total);
}
