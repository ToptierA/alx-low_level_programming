#include <stdio.h>
#define UNUSED(x) (void)(x)

/**
 * main - entry point
 * @argc: number of command-line arguments
 * @argv: array of actual arguments
 *
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	UNUSED(argv);

	/*Print the number of arguments*/
	printf("%d\n", (argc - 1));

	return (0);
}
