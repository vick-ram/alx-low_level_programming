#include <stdio.h>
/**
*main - main entry point
*Description: -outputs letters in lowercase
*Return: always return 0
*/
int main(void)
{
	char alphabet = 97;

	while(alphabet <= 122)
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
