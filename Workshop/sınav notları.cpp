#include<stdio.h>
#include<conio.h>
	int main(void){
	 
	 float x;
	 float z;
	 float a;
	 float b;
	 
	 printf("enter the 1.grade:\n");
	 scanf("%f",&x);
	 printf("enter the 2.grade:\n");
	 scanf("%f",&z);
	 printf("enter the 3.grade:\n");
	 scanf("%f",&a);
	 
	 
	   b=(x*(20.0/100.0))+(z*(20.0/100.0))+(a*(60.0/100.0));
	 
 	 printf("The Last Grade is %f",b);		

		return 0;
	}
