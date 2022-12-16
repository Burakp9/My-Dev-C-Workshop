#include<stdio.h>
#include<math.h>
int main(void){
	float a,b,c;
	float x1,x2;
	float h,delta;
	printf("denkleminizin katsayýlarinizi teker teker yaziniz:");
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	delta= ((b*b)+(-4*a*c));
	printf("%f\n",delta);
	h=pow(delta,1/2);
	printf("%f\n",h);
	x1=(-b-h)/2;
	x2=(-b+h)/2;
	if(delta == 0){	
		printf("denklemin 2 reel koku var ve bunlar birbirine esit %f\t%f\n",x1,x2);
	}
	else if(delta < 0){
		printf("denklemin reel koku yoktur\n");
	}
	else if (delta > 0){
	
		printf("denklemin 2 adet reel koku var%f\t%f\n ",x1,x2);
	}
	
	return 0;
}
