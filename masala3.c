#include <stdio.h>

void ozgaruv(int *son1, int *son2){
   if(*son1>*son2){
   *son2 = *son1;
     printf("Son1 -> %d\nSon2 -> %d", *son1,*son2);
   }else{
   *son1 = *son2;
     printf("Son1 -> %d\nSon2 -> %d", *son1, *son2);
   }

}




int main(){

   int a,b;
   printf("Son kiriting:");
   scanf("%d%d", &a, &b);

   ozgaruv(&a, &b);
}
