#include "shell.h"

/**
 * _erratoi - converts a string to an integer
 * @str: the string to be converted
 * Return: 0 if no numbers in string, converted number otherwise
 *       -1 on error
 */
int err_atoi(char *str)
{
	int i = 0;
	unsigned long int result = 0;

	if (*str == '+')
		str++;
	for (i = 0;  str[i] != '\0'; i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			result *= 10;
			result += (str[i] - '0');
			if (result > INT_MAX)
				return (-1);
		}
		else
			return (-1);
	}
	return (result);
}

/**
 * print_error - prints an error message
 * @info: the parameter & return info struct
 * @estr: string containing specified error type
 * Return: 0 if no numbers in string, converted number otherwise
 *        -1 on error
 */
void printerror(info_t *info, char *estr)
{
	err_puts(info->fname);
	err_puts(": ");
	printdecimal(info->line_count, STDERR_FILENO);
	err_puts(": ");
	err_puts(info->argv[0]);
	err_puts(": ");
	err_puts(estr);
}

/**
 * print_decimal - function prints a decimal (integer) number (base 10)
 * @input: the input
 * @fd: the filedescriptor to write to
 *
 * Return: number of characters printed
 */
int printdecimal(int input, int fd)
{
	int (*__putchar)(char) = _putchar;
	int i, cnt = 0;
	unsigned int _abs_, current;

	if (fd == STDERR_FILENO)
		__putchar = err_putchar;
	if (input < 0)
	{
		_abs_ = -input;
		__putchar('-');
		cnt++;
	}
	else
		_abs_ = input;
	current = _abs_;
	for (i = 1000000000; i > 1; i /= 10)
	{
		if (_abs_ / i)
		{
			__putchar('0' + current / i);
			cnt++;
		}
		current %= i;
	}
	__putchar('0' + current);
	cnt++;

	return (cnt);
}

/**
 * convert_number - converter function, a clone of itoa
 * @num: number
 * @base: base
 * @flags: argument flags
 *
 * Return: string
 */
char *convertnumber(long int num, int base, int flags)
{
	static char *array;
	static char buffer[50];
	char sign = 0;
	char *ptr;
	unsigned long n = num;

	if (!(flags & CONVERT_UNSIGNED) && num < 0)
	{
		n = -num;
		sign = '-';

	}
	array = flags & CONVERT_LOWERCASE ? "0123456789abcdef" : "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';

	do	{
		*--ptr = array[n % base];
		n /= base;
	} while (n != 0);

	if (sign)
		*--ptr = sign;
	return (ptr);
}

/**
 * remove_comments - function replaces first instance of '#' with '\0'
 * @buf: address of the string to modify
 *
 * Return: Always 0;
 */
void removecomments(char *buf)
{
	int i;

	for (i = 0; buf[i] != '\0'; i++)
		if (buf[i] == '#' && (!i || buf[i - 1] == ' '))
		{
			buf[i] = '\0';
			break;
		}
}
