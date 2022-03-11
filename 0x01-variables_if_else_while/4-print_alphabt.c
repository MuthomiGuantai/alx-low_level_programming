#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Return: return 0 if successful
 */
int main(void)
{
char alphabet;
char l = '\n';
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
if (alphabet != 'e' && alphabet != 'q')
{
putchar(alphabet);
}
}
putchar(l);
return (0);
}
