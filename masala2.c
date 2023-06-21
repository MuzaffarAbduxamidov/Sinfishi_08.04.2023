#include <stdio.h>

int main(){

   int a=8;
   int *ptr = &a;
   if(*ptr%2==0){
     printf("SALOM");
   }else{
     printf("hayr");
   }
}
