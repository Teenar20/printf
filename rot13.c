#include "main.h"

/**
 * rot13 - Function that encodes a str using rot13
 * @s: This is the str to be encoded
 * Return: The string encoded
 */

int rot13(char *s)
{
int n, m;
char *normal, *rot13;

normal = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (n = 0; s[n] != '\0'; n++)
{
for (m = 0; normal[m] != '\0'; m++)
{
if (s[n] == normal[m])
{
_putchar(rot13[m]);
break;
}
}

if (!normal[m])
_putchar(s[n]);
}
return (n);
}

/**
 * rot - Function that prints the rot13 string
 * @list: This is the str to encoded
 * Return: Length of the string encoded
 */

int rot(va_list list)
{
char *p;
int p_len;

p = va_arg(list, char *);
p_len = rot13((p != NULL) ? p : "(ahyy)");

return (p_len);
}
