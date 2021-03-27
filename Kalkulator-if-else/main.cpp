#include <stdio.h>
int main (){
	
	double nilai1;
	double nilai2;
	int nilai;
	
	printf("\n Program Kalkulator Mengunakan if");
	printf("\n by muhamad zulfikar");
	
	printf("\n masukan nilai 1 :");
	scanf("%d",&nilai1);
	printf("\n masukan nilai 2 :");
	scanf("%d",&nilai2);
	
	printf("\n pilihan 1 adalah penjumlahan");
	printf("\n pilihan 2 adalah pengurangan");
	printf("\n pilihan 3 adalah perkalian");
	printf("\n pilihan 4 adalah pembagian");
	
	printf("\n masukan pilihan anda :");
	scanf("%d",&nilai);
	
	if(nilai==1)
	printf("\n hasil penjumlahan adalah : %d", nilai1 + nilai2);
	
	if(nilai==2)
	printf("\n hasil pengurangan adalah : %d", nilai1 - nilai2);
	
	if(nilai==3)
	printf("\n hasil perkalian adalah : %d", nilai1 * nilai2);
	
	if(nilai==4)
	printf("\n hasil pembagian adalah : %d", nilai1 / nilai2);
	
	return 0;
}
