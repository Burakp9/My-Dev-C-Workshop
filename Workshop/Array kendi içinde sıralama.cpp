#include<stdio.h>
int main(){
	int i,j,b,gecici;
	printf("enter your array values");
	int array[]={1,4,8,2,3};
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if (array[j]>array[j+1]){
				gecici=array[j];
				array[j]=array[j+1];
				array[j+1]=gecici;
		}
		}
	}
	for(i=0;i<5;i++)
	printf("%d ",array[i]);
	return 0;
}
