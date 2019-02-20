#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * main - the program generate a 9 digits of random number as password
 * @n: a random number
 * @snum: a array of string that covert by numbers n
 * @fp: a pointer point to file crackme.
 *
 * Return: return 0.
 */

int main(void)
{
	int i, n, tens;
	char snum[30];
	FILE *fp;

	tens = 100000000;
	printf("Open crackme file in write mode\n");
	fp = fopen("101-crackme", "w");
	if (fp == NULL)
	{
		printf("Could not open file test.c");
		return (1);
	}
	printf("\n Generate a random numbers for the password \n");
	srand(time(0));
	n = (rand() - RAND_MAX / 2);
	for (i = 0; i < 9 && tens > 0; i++)
	{
		snum[i] = (n / tens) % 10 + '0';
		tens /= 10;
	}
	snum[i++] = '\0';
	fputs(snum, fp);
	fputs("\n", fp);
	printf("Closing the file");
	fclose(fp);
	return (0);
}
