// Let investigate data types and variables

#include <stdio.h>

int main(void)
{
 char c, test_symbol; // declaration of discrete variables
                      // this is just creation of correspondance
                      // variable name (or identificator) VS
                      // some place and some amount of bytes in memory
 printf ("Value of c variable as symbol: %c\n", c);
 printf ("Value of c variable as integer number (dec): %d\n", c);
 printf ("Value of c variable as integer number (oct): %#o\n", c);
 printf ("Value of c variable as integer number (hex): %#x\n", c);
 // after declaration value of variable isn't known
printf ("\n");
 //that is why it is better (but not obligatory to use definition
 char c_new = 85; // definition of discrete variable
                  // is declaration + assinging of value
                  // = assinging operation (right part value is written
                  // in a memory place mentioned by the left part)
 // there is some time (in microseconds or in nanoseconds etc.) between
 // every action
 printf ("Value of c_new variable as symbol: %c\n", c_new);
 printf ("Value of c_new variable as integer number (dec): %d\n", c_new);
 printf ("Value of c_new variable as integer number (oct): %#o\n", c_new);
 printf ("Value of c_new variable as integer number (hex): %#x\n", c_new);
printf ("\n");

 // the role of variable is to BE VARIED (changed)
 // when we need we can assign new value!
 c = 'Y';
 printf ("Value of c variable as symbol: %c\n", c);
 printf ("Value of c variable as integer number (dec): %d\n", c);
 printf ("Value of c variable as integer number (oct): %#o\n", c);
 printf ("Value of c variable as integer number (hex): %#x\n", c); 
printf ("\n");

c = 0105;
 printf ("Value of c variable as symbol: %c\n", c);
 printf ("Value of c variable as integer number (dec): %d\n", c);
 printf ("Value of c variable as integer number (oct): %#o\n", c);
 printf ("Value of c variable as integer number (hex): %#x\n", c); 
printf ("\n");

c = 0x4B;
 printf ("Value of c variable as symbol: %c\n", c);
 printf ("Value of c variable as integer number (dec): %d\n", c);
 printf ("Value of c variable as integer number (oct): %#o\n", c);
 printf ("Value of c variable as integer number (hex): %#x\n", c); 
printf ("\n");
 return 0;
}

