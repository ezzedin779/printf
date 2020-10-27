#include "holberton.h"
/**
 * _integer - print integer
 *@spec: specifeirs
 *Return: int
 */

int _integer(va_list spec)
{
int count = 0;
int abdesami3 = 1;
int a;
unsigned int b;

a = va_arg(spec, int);
if (a < 0)
{
_putchar ('-');
count++;
a *= -1;
}
b = a;
while ((a / abdesami3) >= 10)
{
abdesami3 *= 10;
b = a;
}
while (abdesami3 != 0)
{
count++;
_putchar ('0' + (b / abdesami3));
b = b % abdesami3;
abdesami3 = abdesami3 / 10;
}
return (count);
}
