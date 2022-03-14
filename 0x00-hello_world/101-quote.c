#include <stdio.h>
#include <string.h>
/**
 * main - main block
 * quote - quote block
 * Return: 1
 */
int main(void)
{
	char text = ("and that piece of art is useful - Dora Korpar, 2015-10-19");

	write(2, "and that piece of art is useful - Dora Korpar, 2015-10-19\n", text);

	return (1);
}
