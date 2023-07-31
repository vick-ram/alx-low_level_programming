/**
  *_strspn - gets the length of prefix substring
  *@s: - char type param
  *@accept: - char type param
  *Return: - returns the number of bytes in the initial segment of of s
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int found;
	char *a;

	while (*s)
	{
		found = 0;
		for (a = accept; *a; a++)
		{
			if (*s == *a)
			{
				found = 1;
				break;
			}
			accept++;
		}
		if (found)
		{
			len++;
			s++;
		}
		else
		{
			break;
		}
	}
	return (len);
}
