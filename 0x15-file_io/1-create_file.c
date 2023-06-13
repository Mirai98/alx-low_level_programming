#include "main.h"

/**
 * create_file -  a function that creates a file.
 * @filename: file name
 * @text_content: text content
 *
 * Return: 1 on success, -1 on failure (file can not be created
 *  file can not be written, write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	int d;
	int WR;
	int i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	WR = write(d, text_content, i);

	if (d == -1 || WR == -1)
		return (-1);

	close(d);

	return (1);
}
