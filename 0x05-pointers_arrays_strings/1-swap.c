/**
 * swap_int - swapping value within the function
 * @a: value a
 * @b: value b
 * Return: void
 */
void swap_int(int *a, int *b)
{
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}
