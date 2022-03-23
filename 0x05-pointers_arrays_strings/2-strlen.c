/**
  * _strlen - return the lenght of a string
  * @s: the string whose size we want to return
  * Return: the lenght of string s
  */
int _strlen(char *s)
{
	int size = 0;

	while (*(s + size))
	{
		size++;
	}
	return (size);
