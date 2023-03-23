#include "main.h"
#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: the char to print
 * Return: Always 0 (Success)
 * on error, -1 is returned, and errno is set approximatley
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
