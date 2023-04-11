#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * _isupper - Check if the given character is an uppercase letter.
 * @c: Character to be tested
 *
 * Return: 1 if uppercase else 0 (False)
 */
int _isupper(int c)
{
	return (c >= 'A' && c <= 'z');
}
