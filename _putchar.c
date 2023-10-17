#include "main.h"

/**
 * _putchar - Function that writes the char c to stdout
 * @c: This is the char to be printed
 * Return: 1 (Success) and -1 (Error)
 */

int _putchar(char c)
{
return (buffer(c));
}

/**
 * buffer - To save the char in a buffer
 * @c: This is the character
 * Return: 1
 **/

int buffer(char c)
{
static char buffering[1024];
static int i;

if (c == -1 || i == 1024)
{
write(1, buffering, i);
i = 0;
}

if (c != -1)
buffering[i++] = c;

return (1);
}
