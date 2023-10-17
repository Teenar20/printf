#include "main.h"

/**
 * string - Function that prints strings
 * @list: This is the list
 * Return: String len
 */

int string(va_list list)
{
char *p;
int p_len;

p = va_arg(list, char*);
p_len = print((p != NULL) ? p : "(null)");

return (p_len);
}
