#include "sort.h"
/**
 * main - This main function for testing Sort Algorithm
 *        it generates 30 integer numbers in a array randomly
 * Return: return 0 on success, otherwise 1
 */
int main(void)
{
	size_t i, size, range = 500;
	int array[ELEMENT_NUM];
	clock_t start, end;
	double time_spent;
	const char *notation = "Shell Sort Big O Notation:\
           \n-----> Best Case: O(nlogn)\
           \n-----> Average Case: depends on gap sequence, usually O(n(logn)^2)\
           \n-----> Worst Case: O(n)";

	srand(time(NULL));
	for (i = 0; i < ELEMENT_NUM; i++)
		array[i] = (rand() % range + 1);
	size = ARRAY_LEN(array);
	print_array(array, size);
	start = clock();
	/* put your different type of sorting function here */
	shell_sort(array, size);
	/* end the sorting */
	end = clock();
	time_spent = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("Data Sorted:\n");
	printf("%s\n", notation);
	printf("Time Spent Sortin: %f\n", time_spent);
	return (0);
}
