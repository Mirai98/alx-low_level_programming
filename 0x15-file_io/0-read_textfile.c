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
	ssize_t OPEN;
	ssize_t WRIT;
	ssize_t R;
	char *Buf;

	OPEN = open(filename, O_RDONLY);
	if (OPEN == -1)
		return (0);
	Buf = malloc(sizeof(char) * letters);
	R = read(OPEN, Buf, letters);
	WRIT = write(STDOUT_FILENO, Buf, t);

	free(Buf);
	close(OPEN);
	return (WRIT);
}
