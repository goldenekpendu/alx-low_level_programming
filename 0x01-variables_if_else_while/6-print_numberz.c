#include <stdio.h>
/**
 *  main - main block
 *  description: Print all numbers of base 10, starting from 0.
 *  You are not allowrd to use any variable of type char.
 *  You can only use `putchar` to print to console.
 *  You can only use putchar twice.
 *  Return: 0
 */

int main(void)
{
	int i;

	while (i < 58)
	{
		putchar(i);
		i++;
	}

	putchar(10);

	return (0);
}
