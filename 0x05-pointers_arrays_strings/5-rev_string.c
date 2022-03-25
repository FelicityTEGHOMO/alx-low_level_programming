/**
  * print rev_string - reverse a string
  * @s: the string
  */
void rev_string(char *s)
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
