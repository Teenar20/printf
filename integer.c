#include "main.h"

/**
 * integer - Function that prints a num in base 10
 * @list: This is the num to print in base 10
 * Return: Length of the numbers in decimal
 **/

int integer(va_list list)
{
char *p_buff;
int measure;

p_buff = itoa(va_arg(list, int), 10);

measure = print((p_buff != NULL) ? p_buff : "NULL");

return (measure);
}
