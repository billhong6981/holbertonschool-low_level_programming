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

for (a = 0 ; a <= 99 ; )
{
putchar((a / 10) + '0');
putchar((a % 10) + '0');
if (a < 99)
{
putchar(',');
putchar(' ');
a++;
}
else
a++;
}
putchar('\n');
return (0);
}
