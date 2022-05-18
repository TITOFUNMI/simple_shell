#include "main.h"
int _strcmp(char *s1, char *s2);

/**
 * main - a homemade minimalistic shell program
 *
 * Return: returns 0 upon success 
 */

int main(void)
{
	char *buffer = NULL;
	size_t buffer_size = 0;
	size_t n_bytes = 0;
	int status;
	pid_t id;

	while (1)
	{
		/*Create an input prompt*/
		write(1, "#cisfun$ ", 10);

		/*Get user input*/
		n_bytes = getline(&buffer, &buffer_size, stdin);
		if (n_bytes == -1)
		{
			perror("./hsh");
			continue;
		}
		buffer[n_bytes - 1] = '\0';
		
		/*Execute user input*/
		char *argv[] = {buffer, NULL};

		/*This piece of code would handle the exit command:
		 *if (_strcmp(argv[0], "exit") == 0) 		 
		 *break;*/

		id = fork(); /*Child process to handle execve*/
		if (id == 0)
		{
			status = execve(argv[0], argv, NULL);
			if (status == -1)
			{
				perror("./hsh");
				break;
			}
		} else
			wait(NULL);
	}
	exit(0);
}

/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: less than 0 if s1 is less than s2, 0 if they're equal,
 * more than 0 if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
