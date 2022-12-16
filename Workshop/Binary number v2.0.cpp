#include<stdio.h>
int main (){
	int x=10;
	int number,output,binary;
	scanf("%d",&number);
       while(binary<=16) {
    	output +=number%x*binary;
    	binary *=2;
    	number/=10;
	}
	printf("%d",output);
	return 0;
}
