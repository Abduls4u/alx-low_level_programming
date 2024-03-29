#include "main.h"

/**
 * print_diagonal - prints \ n times
 *
 * @n: number of times to print
 *
 * Return: void
 *
 */
void print_diagonal(int n)
{
	int j, k;

	if (!(n <= 0))
	{
		for (j = 0; j < n; j++)
		{
			if (n > 1)
			{
				for (k = 0; k < j; k++)
					_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
