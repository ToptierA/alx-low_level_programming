#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of command-line arguments
 * @argv: array of actual arguments
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	/* Check if the correct number of argumens were passed*/
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* Convert the first two arguments to integers*/
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;

	/* Print the result*/
	printf("%d\n", result);

	return (0);
}
