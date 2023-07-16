#include <stdio.h>
/**
  *main -main entry point
  *Description: -prints base 16 numbers
  *Return: always return 0
*/
int main(void)
{
	int n = 48;
	int m = 97;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	while (m <= 102)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
