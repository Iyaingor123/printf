#ifndef MAIN_H
#define MAIN_H
#define BUFFERSIZE 1024

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int _printf(const char *format, ...);
int print_xter(intc, int *count);
int printStr(const char *s, int *count);
int print_percent(int *count);
int print_integer(int num, int *count);
int print_binary(unsigned int num,int *count);
int print_unsigned_int(unsigned int num. int *count);
int printx(unsigned int num, int *count);
int print_octal(unsigned int num, int *count);
int print_HEX(unsigned int num, int *count);
int print_S(const char *s, int *count);
int print_p(const void *ptr. int *count);

#endif
