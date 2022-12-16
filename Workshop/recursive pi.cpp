#include<stdio.h>
#include<math.h>
float recursive(float n){
	if(n==1)
	return (pow(-1,n)*(1/((2*n)+1)));
	
	return (pow(-1,n)*(1/((2*n)+1))+recursive(n-1));
}
int main(){
	float n;
	float pi;
	printf("Enter n value:");
	scanf("%f",&n);
	pi=4*(1 + recursive(n));
	printf("%f",pi);
	return 0;
}
