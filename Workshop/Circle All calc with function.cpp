//Muhammet Burak PERÇÝN 2017502062
#include<stdio.h>
#include<math.h>
#define pi 3.14
double find_distance(int, int, int, int);
double find_diameter(int, int, int, int);
double circumference(double);
double area(double );
int main(){
	int x1,x2,y1,y2;
	printf("enter center (x1,y1)");
	scanf("%d %d",&x1,&y1);
	printf("enter point on circle (x2,y2)");
	scanf("%d %d",&x2,&y2);
	printf("distance,so radius: %lf\n", find_distance(x1,y1,x2,y2));
	printf("Diameter of circle: %lf\n", find_diameter(x1,y1,x2,y2));	
	printf("Circumference of circle: %lf\n", circumference( find_distance(x1,y1,x2,y2) ));
	printf("Area of circle: %lf", area( find_distance(x1,y1,x2,y2)));
	return 0;
}
double find_distance(int x1, int y1 , int x2 , int y2){
	double distance;
	distance=sqrt(pow((x1-x2),2) +pow((y1-y2),2));
	return distance;
}
double find_diameter(int x1, int y1, int x2, int y2){
	double diameter;
	return diameter=2*(find_distance( x1 , y1 ,  x2 , y2));
}
double circumference(double r){
	double cir;
	return cir=r*2*pi;
}
double area(double r){
	double d;
	return d=pi*pow(r,2);
}
