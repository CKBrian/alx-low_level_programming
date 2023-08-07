#include "main.h"
/**
 * create_file - creates a file
 * @filename: text file
 * @text_content: content to insert in the text file
 * Return: 1 on success otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int fdw, fdo, slen = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		*text_content = '\0';
		slen++;
	}
	else
	{
		for (slen = 0; text_content[slen] != '\0'; slen++)
		{}
	}

	fdo = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fdo < 0)
	{
		close(fdo);
		return (-1);
	}
	fdw = write(fdo, text_content, slen);
	if (fdw < 0)
	{
		close(fdo);
		return (-1);
	}

	close(fdo);
	return (1);

}
