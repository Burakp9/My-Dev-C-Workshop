#include<stdio.h>
#include<conio.h>
int main(){
	int a,a1,a2,a3,a4,a5,a6;
	printf("ENTER only five binary number");
	scanf("%d",&a);
	if(a>99999){
	printf("Your integer is bigger then 5 digit");
	return 0;
    }
	else
	a1=a%10;
	a=a-a1;
	a1=a1*2;
    a2=a%100;
    a=a-a2;
    a2=a2/10;
    a2=a2*4;
    a3=a%1000;
    a=a-a3;
    a3=a3/100;
    a3=a3*8;
    a4=a%10000;
    a=a-a4;
    a4=a4/1000;
    a4=a4*16;
	a5=a%100000;
	a5=a5/10000;
	a5=a5*32;
	printf("%d %d %d %d %d %",a1,a2,a3,a4,a5);
	return 0;
}
