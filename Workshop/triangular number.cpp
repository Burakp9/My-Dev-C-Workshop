#include<stdio.h>
int triangularnumber(int a)
{
	return (a*(a+1)/2);
}
int main(){
	int x,y,z;
	scanf("%d %d %d",&x,&y,&z);
	printf("Triangular number %d is %d\n",x ,triangularnumber(x));
	printf("Triangular number %d is %d\n",y ,triangularnumber(y));
	printf("Triangular number %d is %d\n",z ,triangularnumber(z));
	return 0;
}
