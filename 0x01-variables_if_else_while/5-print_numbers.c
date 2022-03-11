#include <stdio.h>
#include <math.h>

#define NUMBER 0
#define LIMIT 10

/**
 * main - entry point
 *
 * Return: return 0 if successful
 */

int main(void)
{
int numbers;
for(numbers = NUMBER; numbers < LIMIT; numbers++)
{
printf("%d", numbers);
}
printf("\n");
return (0);
}
