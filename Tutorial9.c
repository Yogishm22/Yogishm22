#include <stdio.h>
#define PI 3.14 
/* This is a multiline comment

This is ignored by my compiler

*/ 
int main()
{ 
   int c = 8;
   const float b = 7.333;
   //PI = 7.33;cannot do this since PI is a constant
   printf (" tab character \t\t my backslash \a %f", PI);
   //b = 7.22; cannot do this since b is a constant
   // printf("Hello World\n");
   // printf("The value of a is %d and the vakue of b is %2.4f\n", a,b);//
   // printf("%18.4f This", b);



    return 0;
}