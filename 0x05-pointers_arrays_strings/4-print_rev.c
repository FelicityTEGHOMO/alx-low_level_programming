#include "main.h"
/**
  * print_rev - print a string in reverse
  * @s: the string
  */
void print_rev(char *s)
{
	int size = 0;
	int i;

	while (*(s + size))
	{
		size++;
	}
	for (i = size; i <= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
