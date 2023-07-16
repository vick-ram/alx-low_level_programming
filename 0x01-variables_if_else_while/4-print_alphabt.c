#include <stdio.h>
/**
*main -main entry point
*Description: -prints all alphabets except e and o
*Return: alwaysd return 0
*/
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
