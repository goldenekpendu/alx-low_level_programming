#include "main.h"
/**
 * main - Print "_putchar" followed by a new line.
 * Description: You are not allowed to include standard libraries.
 * Return: 0
 */
int main(void)
{
	char putchar[] = "_putchar";
	int i = 0;

	while (putchar[i] != '\0')
	{
		_putchar_h(putchar[i]);
		i++;
	}
	_putchar_h('\n');

	return (0);
}
