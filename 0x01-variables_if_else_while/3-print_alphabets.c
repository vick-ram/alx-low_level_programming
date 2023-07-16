#include <stdio.h>
/**
*main -main entry point
*Description: -prints lowecase and the uppercase letters
*Return: always return 0
*/
int main(void)
{
	char small = 97;
	char caps = 65;

	while (small <= 122)
	{
		putchar(small);
		small++;
	}
	while (caps <= 90)
	{
		putchar(caps);
		caps++;
	}
	putchar('\n');
	return (0);
}
