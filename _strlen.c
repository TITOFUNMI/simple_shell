#include "shell.h"

/**
 * _strlen -  count the number of characters in a string
 *
 * str: string of characters to be counted
 * Return: The number of characters
 */

int _strlen(const char *str)
{
	int count = 0;
	int j = 0;

	while(str[i] != '\0')
	{
		count++;
		j++;
	}

	return(count);
}
