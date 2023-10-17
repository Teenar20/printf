#include "main.h"

/**
 * _unsigned - Function that prints an unsigned int
 * @list: This is the num to be printed
 * Return: Length of the num
 **/

int _unsigned(va_list list)
{
char *p_buff;
int measure;

p_buff = itoa(va_arg(list, unsigned int), 10);

measure = print((p_buff != NULL) ? p_buff : "NULL");

return (measure);
}
