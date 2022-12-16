#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter your number");
	scanf("%d",&a);
	for(b=2;b<a;b++){
		if(a%b==0){				//if mod(a,b)=0 it is not prime number 
		printf("it is not a prime number");
		break ;
	}
		if(b==a/2)
		printf("it is a prime number"); // any number can not dived by own half value 
								// if our b value reach our numbers half value it is prime number
	}

	return 0;
}
	
