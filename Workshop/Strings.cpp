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
 									// bunu yazd�g�m�z zaman strlen direk stringlerin karakter 
 								//karakter dizilerinin uzunlugunu otamatik hesapl�yor yani
 								// int say dizisinin direk otomatik yaz�l� hali
	 for(i=0;i<elemansayisi/2;i++){
 		tutucu=dizi[i];
		 dizi[i]=dizi[elemansayisi-1-i];  // -1 yazmam�z�n sebebi sonda '\0' olmas� yoksa bo�luk kal�r
		  dizi[elemansayisi-1-i]=tutucu; //	ve bo�luk kal�nca sondan terim alamay�z ve ilk terimi bo�luga atamay�z
	 }
 } // void bast�rma fonksiyonu oldugu i�in return olmaz bo� d�ner
 int main (){
 	char ad[20];
 	printf("enter char:");
//	scanf("%s",ad); 
	gets(ad); 	//GETS OLARAK G�RERSEN  bo�luk yapabilir enter la bitirirsin
 	terscevir(ad);
 	printf("%s",ad);
 	return 0;
 }
