#include "holberton.h"
void print_string(char *str);
/**
 *_printf - print output considering the format.
 *@format: format of output
 *Return: int
 */
int _printf(const char *format, ...)
{
  char const *traverse; 
  unsigned int i; 
  char *s; 
  va_list arg;
  int count = 0;

  va_start(arg, format); 
  
  for (traverse = format; *traverse != '\0'; traverse++) 
    {
		while (*traverse != '\0')
{      while ( *traverse != '%') 
	{ 
	  _putchar(*traverse);
	  traverse++;
	  count++;
	}	
		traverse++; 
      switch(*traverse) 
	{ 
	case 'c' : i = va_arg(arg,int);//Fetch char argument
	  _putchar(i);
	  count++;
	  break; 

	case 's': s = va_arg(arg,char *); //Fetch string
	  print_string(s);
	  count++; 
	  break; 
	case '%': _putchar('%');
			  count++;
			  break;
	}
    }
	}
  va_end(arg);
	return (count);
}
/**
*print_string - printing a string
*@str: string
*/
void print_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	str[i] = '\0';
}
