#include "shell.h"
#include <stdio.h>
#include <unistd.h>

/**
 * main - The function that starts the shell
 *
 * Return: 1 on success
 */

int main(void)
{
	char *args[] = {enter_command(), NULL};


	if (execve(args[0], args, NULL) < 0)
	{
		perror("./hsh");
	}
	return (0);
}
