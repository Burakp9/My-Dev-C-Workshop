#include<stdio.h>
void fonksiyon(int matris[][4],int size){
	int i,j;
	for(i=0;i<size;i++){
		for(j=0;j<4;j++){
		printf("%d",matris[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int m[3][4];
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
		printf("%d.satir%d.stun",i,j);
		scanf("%d",&m[i][j]);		
		}
	}
	fonksiyon(m,3);
	return 0;
}
