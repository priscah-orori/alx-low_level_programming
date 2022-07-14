#include "main.h"

/**
 * swap_int - swap the values of two integers a and b
 * @a: integer
 * @b: integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
