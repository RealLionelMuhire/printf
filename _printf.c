#include <stdarg.h>

int _printf(const char *format, ...)
{
	int count = 0, i = 0;

	va_list data;
	va_start(data, format);

	for(i = 0;format[i] != '0' && format[i] != '\0';i++)
	{
		count = count + _putchar(format[i]);
	}

	return (count);
}
