#include <stdio.h>
 int main() {
 	
 	int a1 = 42;
 	char b1 = 66;
 	char b2= 'B';
 	float c1= 4.2;
 	double d1 =0.256564;
 	printf("%d\n %c \n%d\n %.2f\n %.4f\n \t%s",a1,b1,b2,c1,d1,"Burak Percin\n");
 	
 	/*\n ise satýr aþagý için ama "   " içindeki yerde yazman gerekiyor ifade olarak olan yerde degil
 	%f de uzun kusurat oldugu için "%.(sayý)f" yazýnca noktadan sonra o sayý kadar yeri gosteriyor.
 	aþagýdaki yazýalr da karakterlerin ne kadar yer kapladýgýný gösteriyor %d ile gösterme sebebimiz bilgisayarda kapladýgý bytelarýn int formatýnda olmasý 
 	**bu önemli!!! Char formatýnda hem %d hem %c kullanabiliyoruz Ascýý tablosundaki sayý degerini yazarsak %c  ifade degerini yazarsak %d **
 	*/
 	
 	
 	printf("%d byte\n",sizeof(char));
 	printf("%d byte\n",sizeof(int));
 	printf("%d byte\n",sizeof(short int));
 	printf("%d byte\n",sizeof(long int));
 	printf("%d byte\n",sizeof(float));
 	printf("%d byte\n",sizeof(double));
 	
 	return 0;
 }
