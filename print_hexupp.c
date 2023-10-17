#include "main.h"
int is_lowercase(char);
char *string_to_upper(char *);
/**
* print_hexadecimal_upp - Function that prints a num in hexadecimal format
* @list: This is the num to printed
* Return: Length of the num
*/
int print_hexadecimal_upp(va_list list)
{
char *p_buff;
int measure;
p_buff = itoa(va_arg(list, unsigned int), 16);

p_buff = string_to_upper(p_buff);
measure = print((p_buff != NULL) ? p_buff : "NULL");
return (measure);
}
/**
* is_lowercase - To check if the char is in lowercase
* @c: This is the char
* Return: 1 or 0
*/
int is_lowercase(char c)
{
return (c >= 'a' && c <= 'z');
}
/**
* string_to_upper - To change the str to uppercase
* @s: This is the string
* Return: String uppercase
*/
char *string_to_upper(char *s)
{
int j;
for (j = 0; s[j] != '\0'; j++)
{
if (is_lowercase(s[i]))
{
s[j] = s[j] - 32;
}
}
return (j);
}
