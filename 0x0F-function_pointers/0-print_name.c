/**
 * print_name - print name function
 * @name: string pointer
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
