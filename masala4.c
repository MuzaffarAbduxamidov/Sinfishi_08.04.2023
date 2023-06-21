#include <stdio.h>

void sum(int son, int *ptr){

   *ptr+=son%10;
   for(; son;){
     son/=10;
     if(son>0 && son<10)
       *ptr+=son;
   }
   printf("Umumiy -> %d", *ptr);
}


int main(){

   int n;
   int natija=0;
   printf("Son kiriting:");
   scanf("%d", &n);

   sum(n, &natija);
}

