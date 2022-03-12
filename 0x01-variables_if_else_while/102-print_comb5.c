#include <stdio.h>

/**
 * main - print all possible combinaisons of two two-digits
 *
 * Return: 0 for success
 */
int main(void)
{
	int i;
	int j;
	int k;
	int l;
	int nine = 48 + 9;

	for (i = 48; i <= nine; i++)
		for (j = 48; j <= nine; j++)
			for (k = 48; k <= nine; k++)
				for (l = 48; l <= nine; l++)
					if (i < k || i == k && j < l)
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
						if (i < nine
						|| j < nine - 1
						|| k < nine
						|| l < nine)
						{
							putchar(',');
							putchar(' ');
						}
					}
	putchar('\n');

	return (0);
}
