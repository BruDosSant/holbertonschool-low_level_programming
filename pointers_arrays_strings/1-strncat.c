

/**
 * _strncat - no entendi
 * @dest: string al cual se le agregan
 * @src: string que se agrefa
 * @n: no entendi 
 * Return: un mejunje de todo
 */
char *_strncat(char *dest, const char *src, int n) 
{
	char *dest_og = dest;
	int i;

	while (*dest != '\0')
	{
		dest++;
	}

	for (i = 0; i < n && *src != '\0'; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (dest_og);
}
