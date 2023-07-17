#include <stdio.h>
/**
*main -main entry point
*Description: - prints a combination of 3 numbers
*Return: - always return 0
*/
int main(void)
{
	int m;
	int n;
	int l;

	for (n = 48; n < 58; n++)
	{
		for (m = 49; m < 58; m++)
		{
			for (l = 50; l < 58; l++)
			{
				if (l > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(l);
					if (n != 55 || m != 56)
					{
						putchar(44);
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
