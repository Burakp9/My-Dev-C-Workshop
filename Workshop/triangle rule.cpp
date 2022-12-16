#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	printf("Enter triangle three sides:");
	scanf("%d %d %d", &a, &b, &c);
	if(abs(b-c)<a<b+c && abs(a-c)<b<a+c && abs(a-b)<c<(a+b))
	printf("The values of %d,%d,%d can three sides of the triangle.\n",a,b,c);
		else
		printf("They are %d,%d,%d not sides of triangle \n ");

	if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
	printf("The triangle is a right triangle");
	return 0;
	
}
