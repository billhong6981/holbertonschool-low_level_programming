#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int win_nums()
{
	int win[] = {1, 4, 7, 14, 17, 45};

	srand(time(0));
	return (win[rand() % 6]);
}
