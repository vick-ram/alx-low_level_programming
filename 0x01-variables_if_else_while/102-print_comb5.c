#include <stdio.h>
/**
*main - main entry point
*Description: - two digit from 0  to 99
*Return: - always return 0
*/
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (i < j)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				if (i != 98 || j != 99)
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
