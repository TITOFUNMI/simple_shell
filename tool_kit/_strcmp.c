#include "shell.h"

int _strcmp(const char *s1, const char *s2)
{
	int i, res;
	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			break;
		else
			continue;
	}
	res = s1[i] - s2[i];
	return (res);
}
