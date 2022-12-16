#include<stdio.h>
int main(){
	int n,k,i,j,x;
	float facn=1,fack=1,facm=1,hold;
	printf("Enter n value ");
	scanf("%d",&n);
	printf("Enter k value");
	scanf("%d",&k);
	if(n>k){
	for(i=n;i>1;i--){
		facn=facn*i;
	}
		for(j=k;j>1;j--){
		fack=fack*j;
	}
		for(x=(n-k);x>1;x--){
		facm=facm*x;
	}
	}
	hold=facn/(fack*(facm));
	printf("a %d combination of %d elements %.2f",k,n,hold);
	
	
	return 0;
}
