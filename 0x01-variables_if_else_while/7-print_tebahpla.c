#include <stdio.h>
/**
  *main -main entry point
  *Description: -prints alphabets in reverse
  *Return: -always return 0
*/
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
