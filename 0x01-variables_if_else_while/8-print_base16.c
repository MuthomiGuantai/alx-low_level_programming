#include <stdio.h>
#include <stdlib.h>

#define NUMBER '0'
#define LIMIT '9'

/**
 * main - print numbers to base 16 on lower case
 *
 * Return: return 0 if successful
 */

int main(void)
{
int numbers;
for (numbers = NUMBER; numbers <= LIMIT; numbers++)
{
putchar(numbers);
}
for (numbers = 'a'; numbers <= 'f'; numbers++)
{
putchar(numbers);
}
putchar('\n');

return (0);
}
