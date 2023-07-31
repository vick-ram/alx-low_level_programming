/**
  *_strspn - gets the length of prefix substring
  *@s: - char type param
  *@accept: - char type param
  *Return: - returns the number of bytes in the initial segment of of s
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int f;

	while (*s)
	{
		for (f = 0; accept[f]; f++)
		{
			if (*s == accept[f])
			{
				len++;
				break;
			}
			else if (accept[f + 1] == '\0')
				return (len);
		}
		s++;
	}
	return (len);
}
