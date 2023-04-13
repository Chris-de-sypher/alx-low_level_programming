#include "main.h"

/**
 * _isalpha - checks for alp character
 * @c: char to be checked
 * Return: 1, 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
