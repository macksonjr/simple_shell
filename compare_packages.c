#include "shell.h"

/**
 * _strcmp - compares the two strings
 * @name: string to compare
 * @variable: string to compare
 * @length: string 1 length
 * Return: 1 id successful and -1 if failed
 */
int _strcmp(char *name, char *variable, unsigned int length)
{
	unsigned int var_length;
	unsigned int i;

	var_length = _strlen(variable);
	if (var_length != length)
		return (-1);

	i = 0;
	while (name[i] != '\0' && variable[i] != '\0')
	{
		if (name[i] != variable[i])
			return (1);
		i++;
	}
	return (0);
}

/**
 * _strncmp - compares the two strings up to n
 * @name: String to be compared
 * @variable: string 2
 * @length: length of string 1
 * Return: 1 on success and -1 on failure
 */
int _strncmp(char *name, char *variable, unsigned int length)
{
	unsigned int i;

	i = 0;
	while (i < length)
	{
		if (name[i] != variable[i])
			return (-1);
		i++;
	}
	return (1);
}

/**
 * *_strcpy - copies the strings
 * @dest: Pointer to a new string
 * @src: String that are to be copied
 * Return: New string
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int j = _strlen(src);

	for (i = 0; i <= j; i++)
		dest[i] = src[i];

	return (dest);
}
/**
 * _strlen - Determines the length of strings
 * @str: string that are to be evaluated
 * Return: the string length
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}
