#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct Arg - Structure representing
 * @type: The type of the argumen
 * @value: A union containing
 */
typedef struct
{
	char type;
	union
	{
		int int_val;
		char char_val;
		float float_val;
		char *str_val;
	} value;
} Arg;

#endif
