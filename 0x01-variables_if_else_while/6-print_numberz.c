#include <stdio.h>
/**
  *main - main entry point of function
  *Description: -prints numbers from 0 to 10 using putchar
  *Return: -always return 0
*/
int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
