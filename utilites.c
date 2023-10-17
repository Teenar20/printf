#include "main.h"


/**
 * _strlen - Function to calculate the len of a string
 * @str: This is the string
 * Return: length
 **/
int _strlen(const char *str)
{
int b;

for (b = 0; str[b] != 0; b++)
;

return (b);
}

/**
 * print - Function to print the character
 * @str: This is the string
 * Return: The string length
 */

int print(char *str)
{
int p;

for (p = 0; str[i] != '\0'; ++i)
_putchar(str[p]);

return (p);
}
