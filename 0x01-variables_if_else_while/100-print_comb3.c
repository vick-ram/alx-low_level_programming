#include <stdio.h>
/**
  *main - main enry point
  *Description: -prints a combination odf numbers
  *Return: always return 0
  */
int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 56; n++)
	{
		for (m = 49; m <= 57; m++)
		{
			if (m > n)
			{
			putchar(n);
			putchar(m);
			if (n != 56 || m != 57)
			{
				putchar(44);
				putchar(' ');
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
