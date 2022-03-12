#include <stdio.h>

/**
 * main - print all possible combinaisons of single-gigit.
 *
 * Return: 0 for success
 */
int main(void)
{
	int i;

	for (i = 48; i <= 48 + 9; i++)
	{
		putchar(i);
		if (i != 48 + 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
