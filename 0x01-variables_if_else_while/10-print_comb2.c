#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;

for (a = 0 ; a <= 99 ; a++)
{
putchar((a / 10) + '0');
putchar((a % 10) + '0');
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
