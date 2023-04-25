#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of itself
 * @argc: The number of arguments supplied to the program
 * @argv: An array of pointers to the arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a, i;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	a = atoi(argv[1]);

	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < a; i++)
	{
		opcode = *(unsigned char *)address;
		print("%.2x", opcode);

		if (i == a - 1)
			continue;
		printf(" ");

		address++;
	}

	printf("\n");

	return (0);
}
