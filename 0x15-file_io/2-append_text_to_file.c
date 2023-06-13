#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: file name
 * @text_content: text content
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int z;
	int WR;
	int j = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (j = 0; text_content[j];)
			j++;
	}

	z = open(filename, O_WRONLY | O_APPEND);
	WR = write(z, text_content, j);

	if (z == -1 || WR == -1)
		return (-1);

	close(z);

	return (1);
}
