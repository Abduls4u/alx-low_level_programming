#include "main.h"

/**
 * print_sign - prints sign of a number
 *
 * @c: number
 *
 * Return: 1 if c is positive, 0 if zero, -1 if  otherwise
 *
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
