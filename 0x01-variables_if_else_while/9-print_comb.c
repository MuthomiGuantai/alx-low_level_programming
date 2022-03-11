#include <stdio.h>
#include <stdlib.h>

#define MAX 10
#define MIN 0
#define SEP '0'

/**
* main - print all possible combinations 
* of single-digit numbers.
*
* Return: return 0 if successful
**/

int main(void)
{
int number;
for (number = MIN; number < MAX; number++)
{
putchar(number + SEP);
if (number != (MAX - 1))
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
