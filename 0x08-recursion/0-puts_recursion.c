#include "main.h"
/**
  * _puts_recursion - function that prints a string followed by
  * a new line character
  *
  * @s: string to print
  *
  * Return: void
  *
  */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
		_puts_recursion(&s[i]);
	}
	else
		_putchar('\n');
}
