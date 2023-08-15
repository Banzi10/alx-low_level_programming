#include <stdio.h>
/**
 *main - main entry point
 *Description - print 0 to 9 with putchar and for loop
 *Return: always 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
