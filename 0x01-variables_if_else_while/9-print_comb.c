#include <stdio.h>
/**
  *main - main entry point
  *Description: - 'prints numbers separated by comma'
  *Return: - always returns 0
  */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(44);
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
