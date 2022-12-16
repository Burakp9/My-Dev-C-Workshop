#include<stdio.h>
 int f(int n)
 {
 	if(n>1)        // https://www.youtube.com/watch?v=cv7CY8UmFL0
 	 f(n-1);	  // Call back mekanýzmasý var o yüzden yazdýrma sýrasý 1 2 3 diye oluyor acýklama linki üste.
    printf("%d ",n);
 }
  int main (){
  	 f(3);
  }
