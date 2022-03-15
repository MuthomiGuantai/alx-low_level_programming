#include "main.h"

/**
 * main - prints _printchar and new line
 *
 * Return: return 0 if successful
 */

int main(void)
{
	char c[] = "_putchar";
	int i = 0;

	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}
	_putchar(10);

	return (0);
}
