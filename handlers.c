#include "main.h"

/**
 * handler - This will be the format controller
 * @str: This is the string format
 * @list: This has the list of arg
 * Return: Total size of arg with the total size of the base str
 */

int handler(const char *str, va_list list)
{
int size, p, aux;

size = 0;
for (p = 0; str[p] != 0; i++)
{
if (str[p] == '%')
{
aux = percent_handler(str, list, &p);
if (aux == -1)
return (-1);

size += aux;
continue;
}

_putchar(str[p]);
size = size + 1;
}


return (size);
}

/**
 * percent_handler - This is the controller for the percent format
 * @str: This is the string format
 * @list: This is the list of arg
 * @n: Iterator
 * Return: The size of the number of elements printed
 */

int percent_handler(const char *str, va_list list, int *n)
{
int size, m, number_formats;
format formats[] = {
{'s', string}, {'c', _char},
{'d', integer}, {'i', integer},
{'b', binary}, {'u', _unsigned},
{'o', octal}, {'x', hexadecimal_low},
{'X', hexadecimal_upp}, {'p', pointer},
{'r', rev_string}, {'R', rot}
};

*n = *n + 1;

if (str[*n] == '\0')
return (-1);

if (str[*n] == '%')
{
_putchar('%');
return (1);
}

number_formats = sizeof(formats) / sizeof(formats[0]);
for (size = m = 0; m < number_formats; m++)
{
if (str[*n] == formats[m].type)
{
size = formats[m].f(list);
return (size);
}

}

_putchar('%'), _putchar(str[*n]);

return (2);
}
