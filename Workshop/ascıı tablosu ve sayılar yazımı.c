#include <stdio.h>
 int main() {
 	
 	int a1 = 42;
 	char b1 = 66;
 	char b2= 'B';
 	float c1= 4.2;
 	double d1 =0.256564;
 	printf("%d\n %c \n%d\n %.2f\n %.4f\n \t%s",a1,b1,b2,c1,d1,"Burak Percin\n");
 	
 	/*\n ise sat�r a�ag� i�in ama "   " i�indeki yerde yazman gerekiyor ifade olarak olan yerde degil
 	%f de uzun kusurat oldugu i�in "%.(say�)f" yaz�nca noktadan sonra o say� kadar yeri gosteriyor.
 	a�ag�daki yaz�alr da karakterlerin ne kadar yer kaplad�g�n� g�steriyor %d ile g�sterme sebebimiz bilgisayarda kaplad�g� bytelar�n int format�nda olmas� 
 	**bu �nemli!!! Char format�nda hem %d hem %c kullanabiliyoruz Asc�� tablosundaki say� degerini yazarsak %c  ifade degerini yazarsak %d **
 	*/
 	
 	
 	printf("%d byte\n",sizeof(char));
 	printf("%d byte\n",sizeof(int));
 	printf("%d byte\n",sizeof(short int));
 	printf("%d byte\n",sizeof(long int));
 	printf("%d byte\n",sizeof(float));
 	printf("%d byte\n",sizeof(double));
 	
 	return 0;
 }
