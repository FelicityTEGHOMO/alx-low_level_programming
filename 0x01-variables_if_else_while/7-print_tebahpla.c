#include <stdio.h>

/**
 * main - print alphabet in lowercase in reverse.
 *
 * Return: 0 for success
 */
int main(void)
{
	int i;

	for (i = 97 + 25; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
