#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * main - main block
 * quote - quote block
 * Return: 1
 */
int main(void)
{
	int t = strlen("and that piece of art is useful - Dora Korpar, 2015-10-19\n");

	write(2, "and that piece of art is useful - Dora Korpar, 2015-10-19\n", t);

	return (1);
}
