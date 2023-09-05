#include "main.h"

/**
 * checkfile - checks
 * @file_from: first
 * @file_to: second
 * @argv: from main Argument vector
 * Return: nothing
 */
void checkfile(int file_from, int file_to, char **argv)
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * checkclose - closes file
 * @file1: file to close
 * @file2:file from
 * Return: nothing
 */
void checkclose(int file1,int file2)
{
	int err_close;

	err_close = close(file1);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file2);
		exit(100);
	}
}

/**
 * main - main function
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 always (Sucess)
 */
int main(int argc, char **argv)
{
	int file_from, file_to;
	ssize_t r, w;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	checkfile(file_from, file_to, argv);

	r = 1024;
	while (r == 1024)
	{
		r = read(file_from, buffer, 1024);
		if (r == -1)
			checkfile(-1, 0, argv);
		w = write(file_to, buffer, r);
		if (w == -1)
			checkfile(0, -1, argv);
	}
	checkclose(file_from,file_from);
	checkclose(file_to,file_from);
	return (0);
}
