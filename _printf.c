#include "holberton.h"

int (*_printer(char flag))(va_list);
int _print(char c);

/**
 * _printf - produces output according to a format.
 * @format: format specifier.
 * Return: number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int i, printed_chars = 0;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(arg, format);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] != '%')
		{
			_print(format[i]);
			printed_chars++;
		}
		else if (format[i + 1] == '\0')
			return (-1);
		else if (format[i + 1] == '%')
		{
			_print(format[i]);
			printed_chars++;
			i++;
		}
		else if (_printer(format[i + 1]) != NULL)
		{
			printed_chars = printed_chars + _printer(format[i + 1])(arg);
			i++;
		}
		else
		{
			_print(format[i]);
			printed_chars++;
		}
	}
	va_end(arg);

	return (printed_chars);
}

/**
 * _printer - auxiliar function for print with a specific format.
 * @flag: format specifier
 * Return: pointer to format function or NULL.
 */
int (*_printer(char flag))(va_list)
{
	printer_t arr[] = {
		{'c', print_c},
		{'s', print_s},
		{'i', print_i},
		{'d', print_i},
		{'b', print_b},
		{'u', print_u},
		{'o', print_o},
		{'x', print_x},
		{'X', print_X},
		{'r', print_r},
		{'R', print_R},
		{'\0', NULL}
	};
	int i;

	for (i = 0; arr[i].flag != '\0'; i++)
		if (flag == arr[i].flag)
			break;

	return (arr[i].function);
}

/**
 * _print - writes the character c to stdout.
 * @c: character to print.
 * Return: on success 1, on error -1.
 */
int _print(char c)
{
	return (write(1, &c, 1));
}