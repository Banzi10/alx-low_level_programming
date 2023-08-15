#include <stdio.h>
/**
  *main - main entry point
  *Description - print single digits numbers from 0
  *Return: always 0
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
