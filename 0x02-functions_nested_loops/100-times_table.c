#include "main.h"

/**
 * print_times_table - prints 9 times table
 *
 * @n: int
 *
 * Return: void
 *
 */
void print_times_table(int n)
{
	int i, j, result;

	if (n < 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				result = i * j;
				if (result > 9 && result < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(result / 10 + '0');
					_putchar(result % 10 + '0');
				}
				else if (result > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(result / 100 + '0');
					_putchar(((result / 10) % 10) + '0');
					_putchar(result % 10 + '0');
				}
				else
				{
					if (j != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(result + '0');
				}
			}
			_putchar('\n');
		}
	}
}
