#include "main.h"
/**
* rev_string - Function that prints a str in reverse
* @list: This is the list of arguments
* Return: Length of the str
**/
int rev_string(va_list list)
{
int j, measure;
const char *str;
str = va_arg(list, const char *);
measure = _strlen(str);
for (j = measure - 1; j >= 0; j--)
_putchar(str[j]);
return (measure);
}
