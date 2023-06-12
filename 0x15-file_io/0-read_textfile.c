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
	ssize_t 0_PEN;
	ssize_t W_RITE;
	ssize_t R_EAD;
	char *buf;

	0_PEN = open(filename, O_RDONLY);
	if (0_PEN == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	R_EAD = read(0_PEN, buf, letters);
	W_RITE = write(STDOUT_FILENO, buf, R_EAD);

	free(buf);
	close(0_PEN);
	return (W_RITE);
}
