Write your own printf() function in c



****PRINTF:**** "printf" is the name of one of the main C output functions, and stands for "print formatted". printf format strings are complementary to scanf format strings, which provide formatted input (parsing). In both cases these provide simple functionality and fixed format compared to more sophisticated and flexible template engines or parsers, but are sufficient for many purposes


****Histroy of printf:**** 

*Early programming languages such as Fortran used special statements with completely different syntax from other calculations to build formatting descriptions. In this example, the format is specified on line 601, and the WRITE command refers to it by line number:

      WRITE OUTPUT TAPE 6, 601, IA, IB, IC, AREA
 601  FORMAT (4H A= ,I5,5H  B= ,I5,5H  C= ,I5,
     &        8H  AREA= ,F10.2, 13H SQUARE UNITS)


*ALGOL 68 had more function-like API, but still used special syntax (the $ delimiters surround special formatting syntax):

printf(($"Color "g", number1 "6d,", number2 "4zd,", hex "16r2d,", float "-d.2d,", unsigned value"-3d"."l$,
         "red", 123456, 89, BIN 255, 3.14, 250));

*But using the normal function calls and data types simplifies the language and compiler, and allows the implementation of the input/output to be written in the same language. These advantages outweigh the disadvantages (such as a complete lack of type safety in many instances) and in most newer languages I/O is not part of the syntax.

C's printf has its origins in BCPL's writef function (1966). In comparison to printf, *N is a newline and the order of field width and type are swapped in writef

WRITEF("%I2-QUEENS PROBLEM HAS %I5 SOLUTIONS*N", NUMQUEENS, COUNT)
Probably the first copying of the syntax to outside the C language was the Unix printf shell command, which first appeared in Version 4, as part of the porting to C.
 
****ABOUT THE TEST :****

**The printf test includes a variety of matching problems. They are designed to be tricky, and student
feedback indicates that if anything, they are more
tricky that expected**

****CONCLUSION****

The printf function is a powerful device for printing numbers and other things stored in variables.
With this power there is a certain amount of complexity. Taken all at once, the complexity makes
printf seem almost impossible to understand. But
the complexity can be easily unfolded into simple
features, including width, precision, signage, justification, and fill. By recognizing and understanding these features, printf will become a useful and
friendly servant in your printing endeavors.