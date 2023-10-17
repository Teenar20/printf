#include "main.h"

/**
 * binary - Function that prints a num in base 2
 * @list: This is the num to be printed in base 2
 * Return: Length of the num in binary
 **/

int binary(va_list list)
{
char *p_buff;
int measure;

p_buff = itoa(va_arg(list, unsigned int), 2);

measure = print(p_buff);

return (measure);
}
