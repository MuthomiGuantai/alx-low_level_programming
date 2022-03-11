#include <stdio.h>
#include <stdlib.h>

#define MAX 10
#define MIN 0
#define SEP '0'

/**
* main - print all possible combinations 
* of single-digit numbers.
* Return: return 0 if successful
*/
int main(void)
{
int digit;

for (digit = MIN ; digit < MAX ; digit++)
{
putchar(digit + SEP);
if (digit != (MAX - 1))
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
