#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/* printf.c */
int _printf(const char *, ...);

/* handlers.c */
int handler(const char *, va_list);
int percent_handler(const char *, va_list, int *);

/* _putchar.c */
int _putchar(char);
int buffer(char);

/* utils.c */
int _strlen(const char *);
int print(char *);
char *itoa(long int, int);

/* printers */
int string(va_list);
int _char(va_list);
int integer(va_list);
int binary(va_list);
int rot(va_list);
int _unsigned(va_list);
int octal(va_list);
int hexadecimal_low(va_list);
int hexadecimal_upp(va_list);
int pointer(va_list);
int rev_string(va_list);

/**
 * struct _format - This is the typedef struct
 * @type: This is the format
 * @f: This is the func associated
 **/
typedef struct _format
{
char type;
int (*f)(va_list);
} format;


#endif /* MAIN_H */
