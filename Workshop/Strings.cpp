#include<stdio.h>
#include<string.h>
int say(char dizi[]){
	int i,sayi=0;
	for(i=0; dizi[i] != '\0';i++){	// '\0' stringlerde en son terimdir fazladan yer kaplar
		sayi++;
	 }
	return sayi;	
}
 void terscevir(char dizi[]){
 	int i,tutucu,elemansayisi=0;
	elemansayisi=say(dizi);  	//bunu da kullanabiliriz
 									// bunu yazdýgýmýz zaman strlen direk stringlerin karakter 
 								//karakter dizilerinin uzunlugunu otamatik hesaplýyor yani
 								// int say dizisinin direk otomatik yazýlý hali
	 for(i=0;i<elemansayisi/2;i++){
 		tutucu=dizi[i];
		 dizi[i]=dizi[elemansayisi-1-i];  // -1 yazmamýzýn sebebi sonda '\0' olmasý yoksa boþluk kalýr
		  dizi[elemansayisi-1-i]=tutucu; //	ve boþluk kalýnca sondan terim alamayýz ve ilk terimi boþluga atamayýz
	 }
 } // void bastýrma fonksiyonu oldugu için return olmaz boþ döner
 int main (){
 	char ad[20];
 	printf("enter char:");
//	scanf("%s",ad); 
	gets(ad); 	//GETS OLARAK GÝRERSEN  boþluk yapabilir enter la bitirirsin
 	terscevir(ad);
 	printf("%s",ad);
 	return 0;
 }
