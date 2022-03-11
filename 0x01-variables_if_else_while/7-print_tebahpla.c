#include <stdio.h>
#include <stdlib.h>

#define START 'a'
#define END 'z'

/**
 * main - print lower case letters in reverse
 *
 * Return: return 0 if successful
 */

int main(void)
{
char alphabet, s = '\n';
for (alphabet = END; alphabet >= START; alphabet--)
{
putchar(alphabet);
}
putchar(s);

return (0);
}
