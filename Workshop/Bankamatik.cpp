#include<stdio.h>
int main (void){
	int islem,a,b;
	int bakiye ;
	int tutar;	
	printf("Islemler\n 1.Para Cekme\n 2.Para Yatirma \n 3.Havale Islemleri \n 4.Bakiye Sorgulama \n 5.Kart Iade \n");
	printf("Hesap bakiyesi giriniz:");
	scanf("%d",&bakiye);
	printf("Islem Seciniz:");
	scanf("%d",&islem);

	switch(islem) 
	{
		
		case 1:
			printf("Bakiyeniz:%d\n",bakiye);
			printf("Cekliecek tutar:");
			scanf("%d",&tutar);
			if(bakiye < tutar){
			
			printf("Yetersiz bakiye \n");
			break;
		}
			bakiye -= tutar;
			printf("Bakiyeniz:%d\n",bakiye);
			break;
		case 2:
			printf("Bakiyeniz:%d\n",bakiye);
			printf("Yatiralacak tutar:",tutar);
			scanf("%d",&tutar);
			bakiye += tutar;
			printf("Bakiyeniz:%d\n",bakiye);
			break;
			
		case 3:
			printf("Bakiyeniz:%d\n",bakiye);
			printf("Havale yapilacak tutar:");
			scanf("%d",&tutar);
			if(bakiye < tutar){
	
			
			printf("Yetersiz bakiye \n");
			break;
		}
			bakiye -= tutar;
			printf("Bakiyeniz:%d\n",bakiye);
			break;
		
		case 4:
			printf("Bakiyeniz:%d\n",bakiye);
			break;
		case 5:
		printf("Kart idae edildi");
		break;	
		default:
			break;
		
	}
		
	return 0;
}
