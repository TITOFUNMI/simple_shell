#include "main.h"

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
	
	/*Create an input prompt*/
	write(1, "#cisfun$ ", 10);

	/*Get user input*/
	n_bytes = getline(&buffer, &buffer_size, stdin);
	if(n_bytes == -1)
	{
		perror("./hsh");
		exit(EXIT_SUCCESS);
	}
	buffer[n_bytes - 1] = '\0';

	/*Execute user input*/
	char *argv[] = {buffer, NULL};

	status = execve(argv[0], argv, NULL);
	if (status == -1)
	{
		perror("./hsh");
		exit(EXIT_SUCCESS);
	}
	return (0);
}
