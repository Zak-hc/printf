#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stddef.h>
int _printf(const char *format, ...);
int print_str(const char *str);
int print_char(char c);
void switchh(char f, va_list args);
#endif
