#include<stdio.h>
int combination(int n,int k){
	int i,j,x;
	float facn=1,fack=1,facm=1,hold;;
	for(i=n;i>1;i--)
		facn=facn*i;
		for(j=k;j>1;j--)
		fack=fack*j;
		for(x=(n-k);x>1;x--)
		facm=facm*x;	
	return (facn/(fack*facm));
}
	int main(){
		int n,i,j;
		printf("binomial n factor");
		scanf("%d",&n);
		printf(" 1 \n");
		for(i=1;i<=n;i++){
			for(j=0;j<=i;j++){
			printf(" %d ",combination(i,j));
		}
		printf("\n");
		}
	}

