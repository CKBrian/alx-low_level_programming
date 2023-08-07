#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: text file
 * @text_content: String to append to file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fdo, fdw, slen = 0;

	if (filename == NULL)
		return (-1);
	fdo = open(filename, O_WRONLY | O_APPEND);
	if (fdo < 0)
	{
		close(fdo);
		return (-1);
	}
	if (text_content != NULL)
	{
		for (slen = 0; text_content[slen] != '\0'; slen++)
		{}

		fdw = write(fdo, text_content, slen);
		if (fdw < 0)
		{
			close(fdo);
			return (-1);
		}
	}

	close(fdo);
	return (1);
}
