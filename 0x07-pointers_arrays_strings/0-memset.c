#include "main.h"
/**
  * _memset - function that fills memory with a constant byte
  *
  * @s: pointer to the memory
  * @b: byte to fill
  * @n: number of bytes to fill
  *
  * Return: s
  *
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; (i < n); i++)
	{
		s[i] = b;
	}
	return (s);
}
