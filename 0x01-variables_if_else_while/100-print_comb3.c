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

	for (n = 49; n <= 57; n++)
	{
		for (m = 48; m <= 57; m++)
		{
			putchar(m);
			m++;
		}
		putchar(n);
		n++;
		putchar(44);
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
