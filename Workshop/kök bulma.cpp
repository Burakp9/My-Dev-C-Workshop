#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c;
	float x1,x2;
	float delta;
	printf("denkleminizin katsayilarinizi teker teker yaziniz:");
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	delta= ((b*b)+(-4*a*c));
	printf("%f\n",delta);
	x1=(-b-sqrt(delta))/2*a;
	x2=(-b+sqrt(delta))/2*a;
	if(delta == 0){	
		printf("denklemin 2 reel koku var ve bunlar birbirine esit %f\t%f\n",x1,x2);
	}
	else if(delta < 0){
		printf("denklemin reel koku yoktur\n");
	}
	else if (delta > 0){
	
		printf("denkelemin 2 adet reel koku var%f\t%f\n ",x1,x2);
	}
	return 0;
}
