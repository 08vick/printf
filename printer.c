#include "main.h"

/**
 *
 *
 *
 *
 */

int check (const char *, (*P)(va_list arg))
{

}
int _printf(const char *format, ...)
{
	int i;
	int x;
	int counter = 0;

	va_list prn;
	va_start(prn, format);

	if (format == NULL)
		return (0);
	for (i = 0; format[i] != '\0'; i++)
	{
		while (format[i] != '%')
		{
			write(1, &format[i], 1);
			format++;
		}
		
		format[i]++;

		if (format[i] == 'i')
		{
			char x = va_arg(prn, int);
			counter += strlen(x);
		}
		else if (format[i] == 'c')
		{
			char x = va_arg(prn, int);
			write(1, &x, 1);
			counter += strlen(x);
		}
		else if (format[i] == 'd')
		{
			int x = va_arg(prn, int);
			write(1, &x, 1);
			counter =+ strlen(x);
		}
		else if (format[i] == '%')
		{
			int x = va_arg(prn, int);
			write(1, &x, 1);
			counter += strlen(x);
		}
		else if (format[i] == 's')
		{
			int x = va_arg(prn, char *);
			puts(s);
			counter += strlen(x);
		}

	}

	return (counter);
}
