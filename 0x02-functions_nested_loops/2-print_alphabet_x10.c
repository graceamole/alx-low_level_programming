#include "main.h"
/**
 * print_alphabet - A program that print the alphabet in lowercase.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char str = 'a';

	while (str <= 'z')
	{
		_putchar(str);
		str++;
	}
	_putchar('\n');

}
