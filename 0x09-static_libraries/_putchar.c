#include <unistd.h>

/**
 * _putchar - write the char c to std output
 * @c: char to print
 *
 * Return: 1 on success, -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
