#include<stdio.h>
#include<string.h>
int main(){
	int a1,a2,i,j,k=0;
	char an1[12]={};
	char an2[12]={};
	printf("Enter first word:");
	scanf("%s",an1);
	printf("Enter second word:");
	scanf("%s",an2);
	a1=strlen(an1);
	a2=strlen(an2);
	if(a1==a2){
		for(i=0;i<=a1;i++){
			for(j=0;j<=a1;j++){
				if(an1[i]==an2[j]){
					k++;
					an1[j]='\0';
				}
			}	
		}
	}
	if((k-1)==a1) // k-1 because '\0' add 1 to k
	printf("This two word is anagram.");
	else 
	printf("This two word is not anagram.");
	return 0;
}
