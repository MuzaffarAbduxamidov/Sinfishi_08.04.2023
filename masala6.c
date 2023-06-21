#include <stdio.h>

void engkattasi(int n, int *engkattasi){
   int son=0;
   /*
1-usul.arraysiz
   for(;n;){
      son=n%10;
      if(*engkattasi<son){
        *engkattasi=son;
      }
      n/=10;
   }
   */
   /*
2-usul.array bilan
   int arr[1000];
   int a=n;
   for(; a; a/=10){
      son=son+a%10;
   }
   for(int i=0; n; i++, n/=10){
      son=n%10;
      arr[i]=son;
      printf("%d \n", arr[i]);
   }
   int max=arr[0];
   for(int j=0; j<son; j++){
      if(arr[j]>max){
        max=arr[j];
      *engkattasi=max;
      }
   }
   *engkattasi=max;
   */

   printf("Eng kattasi son oddiy bo'luvda -> %d", *engkattasi);
}


int main(){

   int katta;
   int n;
   printf("Son kiriting:");
   scanf("%d", &n);

   engkattasi (n, &katta);

   puts("");

   printf("Eng kattasi pointerda -> %d", katta);
}
