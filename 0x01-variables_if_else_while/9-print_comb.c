#include <stdio.h>
/**
  *main -main entry point
  *Description: -prints numbers separated by a comma
  *Return: -always return 0
*/
int main(void)
{
	int n = 48;
	
	while (n <= 57)
	{
		putchar(n);
		putchar(44);
		n++;
	}
	putchar('\n');
	return (0);
}
