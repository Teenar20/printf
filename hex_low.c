#include "main.h"

/**
 * hexadecimal_low - Function that prints a num in hexadecimal format
 * @list: This is the num to print
 * Return: Length of the num
 **/

int hexadecimal_low(va_list list)
{
char *p_buff;
int measure;

p_buff = itoa(va_arg(list, unsigned int), 16);

measure = print((p_buff != NULL) ? p_buff : "NULL");

return (measure);
}
