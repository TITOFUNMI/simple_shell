#include "shell.h"

int _strcat(const char *str1, const char *str2)
{
	int i, len;
	len = 0;

	while(str1[len] != '\0')
		len++;

	while(str2[len] != '\0')
		len++;

	for (i = 0; i < str2; i++)
	{
		str1[len + i] = str2[i];
	}
	str1[len] = '\0';

	return(str1);
}

