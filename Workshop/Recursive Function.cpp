#include<stdio.h>
 int f(int n)
 {
 	if(n>1)        // https://www.youtube.com/watch?v=cv7CY8UmFL0
 	 f(n-1);	  // Call back mekan�zmas� var o y�zden yazd�rma s�ras� 1 2 3 diye oluyor ac�klama linki �ste.
    printf("%d ",n);
 }
  int main (){
  	 f(3);
  }
