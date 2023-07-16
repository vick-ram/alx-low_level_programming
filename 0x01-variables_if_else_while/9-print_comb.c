#include <stdio.h>
/**
  *main - main entry point
  *Description: - prints numbers separated by comma
  *Return: - always returns 0
  */
int main(void)
{
	int n = 48;
	
	while (n <= 57)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(44);
		}
		n++;
	}
	putchar('\n');
	return (0);
}
