#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of command-line arguments
 * @argv: array of actual arguments
 *
 * Return: 1 if the arguments passed aren't correct and 0 otherwise
 */
int main(int argc, char *argv[])
{
	/*checke if the correct number of arguments were passed*/
	if (argc != 1)
	{
		printf("Usage: %s\n", argv[1]);
		return (1);
	}
	/* Print the name of the program*/
	printf("%s\n", argv[0]);

	return (0);
}
