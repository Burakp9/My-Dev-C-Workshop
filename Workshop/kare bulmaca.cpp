#include<stdio.h>
int kare(int);
 int main(){
 	int a;
 	printf("yan yana ve alt alta kac kare var:");
 	scanf("%d",&a);
 	printf("%d",kare(a));
 	return 0;
 }
 int kare(int a){ 	
 		if(a==1)
 		return 1;
 	return kare(a-1)*4+1;
 }
