#include<stdio.h>
void bastir(char a[]);
int say(char a[]);
void tersbas(char a[]);
int main(){
	char ad[20];
	scanf("%s",ad);
	bastir(ad);
	tersbas(ad);
	return 0;
}
void bastir(char a[]){
	int b,i=0;
	b=say(a);
	for(;i<b;i++){
	printf("%c",a[i]);
	printf("\n");
}
}
int say(char a[]){
	int i,say=0;
	for(i=0;a[i] != '\0';i++){
	say++;	
	}
	return say;
}	
void tersbas(char a[]){
	int b,i,tutucu;
	b=say(a);
	for(i=0;i<b/2;i++){
		tutucu=a[i];
		a[i]=a[b-1-i];
		a[b-1-i]=tutucu;
	}
	bastir(a);
}
	
