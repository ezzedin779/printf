#include "holberton.h"
/**
 *_printf - print output considering the format.
 *@format: format of output
 *Return: int
 */
int _printf(const char *format, ...)
{
  char *traverse; 
  unsigned int i; 
  char *s; 
  va_list arg; 
  va_start(arg, format); 
  
  for(traverse = format; *traverse != '\0'; traverse++) 
    { 
      while( *traverse != '%' ) 
	{ 
	  putchar(*traverse);
	  traverse++; 
	} 
      
      traverse++; 

      switch(*traverse) 
	{ 
	case 'c' : i = va_arg(arg,int);//Fetch char argument
	  putchar(i);
	  break; 
	  
	case 'd' : i = va_arg(arg,int); //Fetch Decimal/Integer argument
	  if(i<0) 
	    { 
	      i = -i;
	      putchar('-'); 
	    } 
	  puts(convert(i,10));
	  break; 
	  
	case 'o': i = va_arg(arg,unsigned int); //Fetch Octal representation
	  puts(convert(i,8));
	  break; 
	  
	case 's': s = va_arg(arg,char *); //Fetch string
	  puts(s); 
	  break; 
	  
	case 'x': i = va_arg(arg,unsigned int); 
	  puts(convert(i,16));
	  break; 
	}
    } 
  
 
  va_end(arg); 
} 
