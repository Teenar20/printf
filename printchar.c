#include "main.h"
/**
* _char - Function that prints char
* @list: This is the va_list.
* Return: 1
*/
int _char(va_list list)
{
int aux;
aux = va_arg(list, int);
_putchar(aux);
return (1);
}
