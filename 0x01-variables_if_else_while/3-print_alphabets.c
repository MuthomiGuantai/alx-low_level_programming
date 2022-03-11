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
putchar(alphabet);
for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
putchar(alphabet);
putchar(l);

return (0);
}
