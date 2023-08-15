#include <stdio.h>
/**
  *main - main entry point
  *Description - print both lowercase and uppercase letters with putchar
  *Return: always 0
 */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (m <= 90)
	{
		putchar (m);
		m++;
	}
	putchar('\n');
	return (0);
}
