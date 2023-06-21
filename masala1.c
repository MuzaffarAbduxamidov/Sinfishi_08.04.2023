#include <stdio.h>

int main(){

   int a=8, b=10;
   int *ptr1;
   int *ptr2;

   ptr1 = &a;
   ptr2 = &b;
   printf("Umumiy -> %d", *ptr1+*ptr2);
}
