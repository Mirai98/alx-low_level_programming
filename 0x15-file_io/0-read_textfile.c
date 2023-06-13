#include "main.h"
#include <stdlib.h>

/**
 * read_textfile-  a function that reads a text file
 *           and prints it to the POSIX standard output.
 * @filename: file name
 * @letters: the number of letters to read
 *
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t op;
	ssize_t WR;
	ssize_t r;

	op = open(filename, O_RDONLY);
	if (op == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	r = read(op, buf, letters);
	WR = write(STDOUT_FILENO, buf, r);

	free(buf);
	close(op);
	return (WR);
}
