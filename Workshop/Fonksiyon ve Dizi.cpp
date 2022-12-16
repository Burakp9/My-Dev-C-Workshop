#include<stdio.h>
float avaradge(int dizi1[],int size1){
	float sum=0;
	for(int i=0;i<8;i++)
	sum += dizi1[i];
	return (sum/8);
}
int main()
{
	int dizi[8];
	for(int i=0;i<8;i++){
	printf("%d.ci dizi terimini giriniz:",i);
	scanf("%d",&dizi[i]);
	}
	printf("%.2f",avaradge(dizi,8));
	return 0;	
}

