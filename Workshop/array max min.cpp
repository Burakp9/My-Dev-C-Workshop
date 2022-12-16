#include<stdio.h>
int main(){
	int array[5];
	int i;
	int max,min;
	printf("Input 5 diffrent integers \n");
	for(i=0; i<5; i++){
		scanf("%d",&array[i]); // taking array values
	}
	 min=array[0]; //for coparassion
	 max=array[0];//for comparassion
	 for(i=0; i<5;i++){	// we need loop for comparassion  all values each others
	 	if(array[i]<min)//comparassion for min value
	 	min=array[i];//replace min value
	 	if(array[i]>max)//comparassion for max value
	 	max=array[i];//replace max value
	 }
	printf("Smallest is %d \ Biggest is %d",min,max);
	
	return 0;
}
