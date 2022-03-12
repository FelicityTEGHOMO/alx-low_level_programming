#include <stdio.h>

/**
 * main - print alphabet in lowercase.
 *
 * Return: 0 for success
 */
int main(void)
{
	int i;

	for (i = 97; i <= 97 + 25; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
