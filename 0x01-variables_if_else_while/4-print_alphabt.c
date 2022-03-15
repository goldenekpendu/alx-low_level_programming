#include <stdio.h>

/**
 * main - print the letters of the alpharbet except e, q
 *
 * Return: Alwasys 0 (Sucess)
 */

int main(void)
{
	int e = 97;

	while (e < 123)
	{
		if (e != 101 && e != 113)
		{
			putchar(e);
		}
		e++;
	}
	putchar(10);

	return (0);
}
