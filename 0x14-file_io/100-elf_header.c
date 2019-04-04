#include <string.h>
#include <elf.h>
#include "holberton.h"
/**
 * main - main function, a function displays the information contained in the
 * ELF header at the start of an ELF file.
 * @argc: a number of arguments
 * @argv: a array of arguments contents
 * Return: return 0 on success, -1 if fail
 */
int main(int argc, char **argv)
{
	static char elf[5], array[50], buffer[200];
	FILE *fp;
	char *line[11], *s, *str;
	int i, len, fd;

	str = "readelf -h";
	s = &array[49];
	*s = '\0';
	if (argc != 2)
	{
		write(STDERR_FILENO, "ARGUMENTS ERROR\n", 16);
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write(STDERR_FILENO, "ERROR, can not open file\n", 25);
		exit(98);
	}
	read(fd, elf, 4);
	if (elf[0] != 127 || elf[1] != 'E' || elf[2] != 'L' || elf[3] != 'F')
	{
		write(STDERR_FILENO, "ERROR, is not an ELF file\n", 26);
		exit(98);
	}
	close(fd);
	len = strlen(argv[1]);
	while (len)
		*(--s) = argv[1][--len];
	*(--s) = ' ';
	len = strlen(str);
	while (len)
		*(--s) = str[--len];
	fp = popen(s, "r");
	for (i = 0; i < 11; i++)
	{
		line[i] = fgets(buffer, sizeof(buffer), fp);
		if (i != 8 && i != 9)
			printf("%s", line[i]);
	}
	return (0);
}
