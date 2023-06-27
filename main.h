#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
int is_specifier(char c);
char *_itoa(int n);
char *_itob(int n);
int _putchar(char c);
int _putstr(char *s);
int _strlen(char *s);
int _printf(const char *format, ...);
#endif
