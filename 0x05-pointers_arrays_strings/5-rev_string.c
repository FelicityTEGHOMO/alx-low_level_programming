#include "main.h"
/**
  * print_rev - print a string in reverse
  * @s: the string
  */
void print_rev(char *s)
{
	int size = 0;
	int i;
	char c;

	while (*(s + size))
	{
		size++;
	}
	while (i < size - 1)
	{
		c = *(s + i);
		*(s + i) = *(s + (size - 1));
		*(s + (size - 1)) = c;
		i++;
		size--;
	}
}
