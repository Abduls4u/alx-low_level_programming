#include "main.h"

/**
 * print_numbers - prints 0-9
 *
 * Return: void
 *
 */
void print_numbers(void)
{
	int i = 48;

	while (i < 58)
	{
		_putchar(i);
		i++;
	}
	_putchar(10);
}
