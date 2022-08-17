#include <stdio.h>
#include <stdlib.h>
void main ()
{
   char str[]="3.123";
   printf("String value:%s",str);
   printf("\nFloat value:%f",atof(str));
   printf("\nInt value:%d",atoi(str));
   printf("\nLong value:%ld",atol(str));
   int i=100;
   long l=999999; 
   printf("\nString  = %s",itoa(i,str,10));
   printf("\nString  = %s",ltoa(l,str,10));
}
