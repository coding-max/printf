#include "holberton.h"

/**
 * converter_x - converts a unsigned int number
 * into hexadecimal (lowercase) notation.
 * @i: number to convert.
 */
void converter_x(int i)
{
	if (i < 10)
		_print(i + '0');
	if (i == 10)
		_print('a');
	if (i == 11)
		_print('b');
	if (i == 12)
		_print('c');
	if (i == 13)
		_print('d');
	if (i == 14)
		_print('e');
	if (i == 15)
		_print('f');
}

/**
 * print_x - prints a unsigned int number in hexadecimal (lowercase) notation.
 * @arg: number to print.
 * Return: number of digits printed.
 */
int print_x(va_list arg)
{
	int cont = 1, i = 0, tab[8];
	unsigned int num = va_arg(arg, unsigned int);

	if (num == 0)
	{
		_print('0');
		return (cont);
	}

	while (num != 0)
	{
		tab[i] = (num % 16);
		num = num / 16;
		i++;
	}
	cont = i;
	i--;

	for (; i >= 0; i--)
		converter_x(tab[i]);

	return (cont);
}

/**
 * converter_X - converts a unsigned int number
 * into hexadecimal (uppercase) notation.
 * @i: number to convert.
 */
void converter_X(int i)
{
	if (i < 10)
		_print(i + '0');
	if (i == 10)
		_print('A');
	if (i == 11)
		_print('B');
	if (i == 12)
		_print('C');
	if (i == 13)
		_print('D');
	if (i == 14)
		_print('E');
	if (i == 15)
		_print('F');
}

/**
 * print_X - prints a unsigned int number in hexadecimal (uppercase) notation.
 * @arg: number to print.
 * Return: number of digits printed.
 */
int print_X(va_list arg)
{
	int cont = 1, i = 0, tab[8];
	unsigned int num = va_arg(arg, unsigned int);

	if (num == 0)
	{
		_print('0');
		return (cont);
	}

	while (num != 0)
	{
		tab[i] = (num % 16);
		num = num / 16;
		i++;
	}
	cont = i;
	i--;

	for (; i >= 0; i--)
		converter_X(tab[i]);

	return (cont);
}
