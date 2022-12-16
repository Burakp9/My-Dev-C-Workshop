#include<stdio.h>
#include<math.h>
int main(){
	int x,n,i;
	float fack=1,hold;
	printf("please enter the term number");
	scanf("%d",&n);
	printf("please enter the x number");
	scanf("%d",&x);
	for(i=1;i<=n;i++){
		fack *=i;
		hold += pow(x,1)/fack;
	}
	printf("e^%d = %f",x,hold+1);
	
	
	return 0;
}
