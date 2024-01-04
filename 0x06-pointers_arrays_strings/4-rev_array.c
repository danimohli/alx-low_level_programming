/**
 * reverse_array - array in reverse
 * @n: number of value(s) in array
 * @a: pointer to array
 * Return: void function
 */
void reverse_array(int *a, int n)
{
	int x, y;

	for (x = 0; x < n; x++)
	{
		n--;
		y = a[x];

		a[x] = a[n];
		a[n] = y;
	}
}
