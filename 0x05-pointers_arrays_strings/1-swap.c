/**
  * swap_int - swaps the values of two integers
  * @a: the value of the first integer
  * @b: the value of the second integer
  */
void swap_int(int *a, int *b)
{
	int c;


	c = *a;
	*a = *b;
	*b = c;
}
