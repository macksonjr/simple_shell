#include "shell.h"

/**
 * prompt - Output propmt to standard outpout
 * @fd: Stream selectors
 * @buf: user input storages
**/
void prompt(int fd, struct stat buf)
{
	fstat(fd, &buf);

	if (S_ISCHR(buf.st_mode))
		_puts(PROMPT);
}

/**
 * _puts - Outputs a string in STDOUT
 * @str: Strings to be written
 * Return: void
 */
void _puts(char *str)
{
	unsigned int length;

	length = _strlen(str);

	write(STDOUT_FILENO, str, length);
}
