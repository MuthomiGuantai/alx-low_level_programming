#include <stdio.h>
#include <math.h>

#define NUMBER 0
#define LIMIT 9

/**
 * main - single digits to base 10
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
putchar('\n');
return (0);
}
