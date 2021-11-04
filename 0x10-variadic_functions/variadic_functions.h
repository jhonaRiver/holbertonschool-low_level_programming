#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct format_types - struct format_types
 * @identifier: conversion specifier
 * @f: function pointer
 */
typedef struct format_types
{
	char *identifier;
	void (*f)(char *separator, va_list args);
} f_dt;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
