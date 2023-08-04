#include <stdio.h>
/**
  *main - main entry point
  *@argc: - int type param
  *@argv: - char type pointer array
  *Return: - returns 0
  */
int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s\n", argv[0]);
	return (0);
}
