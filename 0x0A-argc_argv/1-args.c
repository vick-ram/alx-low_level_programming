#include <stdio.h>
/**
  *main - Entry point
  *@argc: - int type param
  *@argv: - char type array pointer
  *Return: - returns 0
  */
int main(int argc, char *argv[])
{
	(void)argv;
	if (argc >= 1)
	printf("%d\n", argc - 1);
	return (0);
}
