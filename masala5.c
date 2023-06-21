#include <stdio.h>

void sum(int n, int *yegindi){

   int son;
   for(; n; n/=10){
    *yegindi+=n%10;
   }
}


int main(){

   int natija=0;
   int n;
   printf("Son kiriting:");
   scanf("%d", &n);

   sum(n, &natija);
   printf("Xonalardagi raqamlar yeg'indisi -> %d", natija);
}
