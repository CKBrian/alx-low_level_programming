#include "main.h"
/**
 * main - copies the content of a file to another file
 * @argc: arument count
 * @argv: pointer to filr names argumrnts
 * Return: exit success
 */
int main(int argc, char **argv)
{
	char buffer[1024];
	int fdo1, fdo2, fdw, fdr = 1;

	if (argc != 3)
	{
		dprintf(2, "Usage: %s filename text\n", argv[0]);
		exit(97); }
	fdo1 = open(argv[1], O_RDONLY);
	if (fdo1 < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }
	fdo2 = open(argv[2], O_CREAT | O_WRONLY | O_APPEND | O_TRUNC, 0664);
	if (fdo2 < 0)
	{
		close(fdo1);
		dprintf(2, "eRROr: Can't write to %s\n", argv[2]);
		exit(99); }
	while (fdr > 0)
	{
		fdr = read(fdo1, buffer, 1024);
		fdw = write(fdo2, buffer, fdr);
		if (fdw < 0)
		{
			close(fdo1);
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99); } }
	if (fdr < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }
	if (close(fdo1) < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", (close(fdo1)));
		exit(100); }
	if (close(fdo2) < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", (close(fdo2)));
		exit(100); }
	return (EXIT_SUCCESS); }
