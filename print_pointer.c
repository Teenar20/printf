#include "main.h"
#include <stdio.h>
int _strcmp(char *, char *);
/**
* pointer - Function to print a num in hexadecimal format
* @list: This is the num to be printed

* Return: Length of the num
*/
int pointer(va_list list)
{
char *p_buff;
int measure;
p_buff = itoa(va_arg(list, unsigned long int), 16);
if (!_strcmp(p_buff, "0"))
return (print("(nil)"));
measure = print("0x");
if (!_strcmp(p_buff, "-1"))
measure += print("ffffffffffffffff");
else
measure += print(p_buff);
return (measure);
}
/**
* _strcmp - Function to compare two strings
* @s1: 1st str
* @s2: 2nd str
* Return: int
*/
int _strcmp(char *s1, char *s2)
{
int p;
for (p = 0; s1[p] != '\0'; p++)
{
if (s1[p] != s2[p])
return (s1[p] - s2[p]);
}
return (0);
}
