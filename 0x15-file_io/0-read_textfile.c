#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: text file
 * @letters: number of letters to print and read
 * Return: 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fdo, fdr, fdw;
	char *str;

	if (filename == NULL)
		return (0);
	str = malloc(sizeof(char) * letters);
	if (str == NULL)
		return (0);
	fdo = open(filename, O_RDONLY);
	if (fdo < 0)
	{
		free(str);
		close(fdo);
		return (0);
	}
	fdr = read(fdo, str, letters);
	if (fdr < 0)
	{
		free(str);
		close(fdo);
		return (0);
	}
	fdw = write(STDOUT_FILENO, str, fdr);
	if (fdw < 0)
	{
		free(str);
		close(fdo);
		return (0);
	}

	free(str);
	close(fdo);
	return (fdw);

}
