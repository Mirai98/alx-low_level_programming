#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *b_create(char *file_name);
void file_close(int d);

/**
 * b_create - Allocates 1024 bytes for a buffer.
 * @file_name: file name
 *
 * Return: buffer
 */
char *b_create(char *file_name)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file_name);
		exit(99);
	}

	return (buff);
}

/**
 * file_close - Closes file descriptors.
 * @d: The file desctiption
 */
void file_close(int d)
{
	int r;

	r = close(d);

	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", d);
		exit(100);
	}
}

/**
 * main - A function Copies the contents of a file to another file.
 * @argc: argc
 * @argv: argv
 *
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 *
 *Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int F;
	int T;
	int RD;
	int WR;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = b_create(argv[2]);
	F = open(argv[1], O_RDONLY);
	RD = read(F, buff, 1024);
	T = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (F == -1 || RD == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		WR = write(T, buff, RD);
		if (T == -1 || WR == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		RD = read(F, buff, 1024);
		T = open(argv[2], O_WRONLY | O_APPEND);

	} while (RD > 0);

	free(buff);
	file_close(F);
	file_close(T);

	return (0);
}
