#include "variadic_functions.h"

/**
 * format_char - formats character
 * @separator: string separator
 * @sa: argument pointer
 */

void format_char(char *separator, va_list sa)
{
	printf("%s%c", separator, va_arg(sa, int));
}

/**
 * format_int - formats integer
 * @separator: string operator
 * @sa: argument pointer
 */

void format_int(char *separator, va_list sa)
{
	printf("%s%d", separator, va_arg(sa, int));
}

/**
 * format_float - formats float
 * @separator: string separator
 * @sa: argument pointer
 */

void format_float(char *separator, va_list sa)
{
	printf("%s%f", separator, va_arg(sa, double));
}

/**
 * format_string - formats string
 * @separator: string separator
 * @sa: argument pointer
 */

void format_string(char *separator, va_list sa)
{
	char *str = va_arg(sa, char *);

	switch ((int)(!str))
	{
		case 1:
		str = "(nil)";

		printf("%s%s", separator, str);
	}
}

/**
 * print_all - prints anything
 * @format: format string
 */

void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list sa;
	token_t tokens[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

	va_start(sa, format);
	while (format && format[i])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(separator, sa);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(sa);
}
