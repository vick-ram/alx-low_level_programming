#include <stdio.h>
/**
  *main - main entry point
  *Description: prints number 0 to 9
  *Return: always return 0
*/
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
