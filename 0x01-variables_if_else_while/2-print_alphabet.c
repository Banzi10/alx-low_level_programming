#include <stdio.h>
/**
  *main - entry point of code
  *Decription - using putchar to print alphabets
  *Return: always 0
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
