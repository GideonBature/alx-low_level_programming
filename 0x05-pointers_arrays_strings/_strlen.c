:x
/**
 * _strlen - returns the length of a string
 * @s: string parameter
 * Return: 0
 */
int _strlen(char *s)
{
	int count = 0, i = 0;

	while (s[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}
