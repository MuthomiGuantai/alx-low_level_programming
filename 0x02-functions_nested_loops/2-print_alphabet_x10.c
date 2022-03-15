#include "main.h"

/**
 * print_alphabet_x10 - prints the lowercase alphabet 10 times on new lines
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char s = 'a';
	int i, f;

	for (i = 0; i < 10; i++)
	{
		for (f = 0; f < 26; f++)
		{
			_putchar(s + f);
		}
		_putchar(10);
	}
}
