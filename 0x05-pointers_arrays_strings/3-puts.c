/**
  *_puts - print a string
  *@str: the contains of a string
  */
void _puts(char *str)
{
	int size = 0;

	while (*(str + size))
	{
		_putchar(*(str + size));
		size++;
	}
	_putchar('\n');
}
