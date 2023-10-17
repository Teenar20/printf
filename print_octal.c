#include "main.h"
/**
* octal - Function that prints an unsigned octal
* @list: This is the num to printed
* Return: Length of the num
**/
int octal(va_list list)
{
char *p_buff;
int measure;
p_buff = itoa(va_arg(list, unsigned int), 8);
measure = print((p_buff != NULL) ? p_buff : "NULL");
return (measure);
}
