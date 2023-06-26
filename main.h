#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
int is_specifier(char c);
int count_args(const char *format);
char *_itoa(int n);
int _putchar(char c);
int _putstr(char *s);
int _strlen(char *s);
int _printf(const char *format, ...);
#endif
