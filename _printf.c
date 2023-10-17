#include "main.h"

/**
 * _printf - Function gives an output according to a format
 * @format: This is a char string, format str has 0 or more directives
 * Return: The number of characters printed
 **/
int _printf(const char *format, ...)
{
int measure;
va_list args;

if (format == NULL)
return (-1);

measure = _strlen(format);
if (measure <= 0)
return (0);

va_start(args, format);
measure = handler(format, args);

_putchar(-1);
va_end(args);

return (measure);
}
