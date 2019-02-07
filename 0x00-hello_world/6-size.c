#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

/**
 * main - Entry point
 *
 * The function will output the type size of in 32bits environment
 * or the type size of in 64bits environment
 * compile it in 64 bits with no warning
 * compile it in 32 bits with waring
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of a char: %lu byte(s)\n", sizeof(char));
printf("Size of an int: %lu byte(s)\n", sizeof(int));
printf("Size of a long int: %lu byte(s)\n", sizeof(long));
printf("Size of a long long int: %lu byte(s)\n", sizeof(long long));
printf("Size of a float: %lu byte(s)\n", sizeof(float));

return (0);

}
