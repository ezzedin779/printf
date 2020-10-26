#include "holberton.h"
/**
 *_printf - print output considering the format.
 *@format: format of output
 *Return: int
 */
int _printf(const char *format, ...)
{
  va_list rnd;
  int i = 0, count = 0;
  

