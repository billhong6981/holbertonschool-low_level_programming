/**
 * reverse_array - a function that reverses the content of an array of integer.
 * @a: a pointer point to base address of an array
 * @n: elements of the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	i = temp =  0;
	n--;
	for ( ; i <= n; n--, i++)
	{
		temp = a[n];
		a[n] = a[i];
		a[i] = temp;
	}
}
