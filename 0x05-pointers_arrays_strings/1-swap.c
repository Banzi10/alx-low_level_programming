#include "main.h"
/**
  * swap_int - swap th values of two integers
  *@a: first value to swap
  *@b: second value
  *Return: always 0
  */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
