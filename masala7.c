#include <stdio.h>

void engkattasi(int n, int *engkattasi){
   int son=0;
   int sum=0;
  // for(; n; n/=10){
    //  son=son+n%10;
//   }
   for(; n; n/=10){
      son = n%10;
      sum = sum * 10 + son;
   }
   printf("Teskari o'zlashtirilgani -> %d", sum);
   *engkattasi=sum;
}

int main(){

   int katta;
   int n;
   printf("Son kiriting:");
   scanf("%d", &n);

   engkattasi (n, &katta);
   puts("");
   printf("Teskari o'zlashtirilgani pointerda -> %d", katta);
}
