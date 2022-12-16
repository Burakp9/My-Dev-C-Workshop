#include<stdio.h>
int main(){
	int i=3,j=4,a;
	int *p1,*p2;
	p1=&i;
	p2=&j;
	a=*p1;
	*p1=*p2;
	*p2=a;
	printf("%d %d",i,j);	
	return 0;
}
