#include<stdio.h>
#include<math.h>
		float foundpi(float x){
		int i,n=0;
		float pi;
		for(i=0;i<x;i++){
		pi+=4*pow(-1,n)/(2*n+1);
		n++;
		}
		return pi;
		}
		int main(){
		printf("Bir sinir degeri giriniz:");
		float x;
		scanf("%f",&x);
		x=foundpi(x);
		printf("%f",x);
		return 0;
	}
