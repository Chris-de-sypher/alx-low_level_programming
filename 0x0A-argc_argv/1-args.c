#include <stdio.h>
#include "main.h"

/**
 * main - prints num of argument passed to the program
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}