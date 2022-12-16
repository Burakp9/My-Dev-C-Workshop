#include<stdio.h>
#include<string.h>
 int findchar(char*,char);
int main(){
	int n;
	char c;
	char ad[20];
	printf("enter Word:");
	scanf("%s",ad);
	printf("\nSearcing letter is :");
	scanf(" %c",&c);
	printf("\n Result: %d",findchar(ad,c));
	return 0;
}
int findchar(char *a,char c){
	int i,j=0,n;
	n=strlen(a);
	for(i=0;i<n;i++){
		if(*(a+i) ==c)
			j++;
	}	
	return j;
}







/* strlen fonksiyonun uzun hali
int say(char dizi[]){
	int i,sayi=0;
	for(i=0; dizi[i] != '\0';i++){	// '\0' stringlerde en son terimdir fazladan yer kaplar
		sayi++;
	 }
	return sayi;	
}
*/
