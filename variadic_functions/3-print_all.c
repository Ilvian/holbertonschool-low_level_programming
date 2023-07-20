#include <stdarg.h>
#include <stdio.h>
/**
 *print_all - function that prints everything
 *@format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	char *separator = "";
	unsigned int i = 0;
	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i + 1] == '\0')
			separator = ", ";
		if (format[i] == 'c')
		{
			printf("%s%c", separator, va_arg(args, int));
		}
		else if (format[i] == 'i')
		{
			printf("%s%d", separator, va_arg(args, int));
		}
		else if (format[i] == 'f')
		{
			printf("%s%f", separator, va_arg(args, double));
		}
		else if (format[i] == 's')
		{
			char *str = va_arg(args, char *);

			if (str == NULL)
				str = "(nil)";
			printf("%s%s", separator, str);
		}
		separator = ", ";
		i++;
	}
	va_end(args);
	printf("\n");
}
