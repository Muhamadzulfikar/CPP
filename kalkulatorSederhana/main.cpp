#include <stdio.h>
int main () {
	
	double nilai1;
	double nilai2;
	
	printf("\n kalkulator sederhana ");
	printf("\n by muhamad zulfikar");
	
	printf("\n program aritmatika");
	printf("\n penjumlahan");
	printf("\n pengurangan");
	printf("\n perkalian");
	printf("\n pembagian");
	
	printf("\n inputkan nilai 1 :");
	scanf("%d",&nilai1);
	printf("\n inputkan nilai 2 :");
	scanf("%d",&nilai2);
	
	printf("\n hasil penjumlahan adalah %d",nilai1 + nilai2);
	printf("\n hasil pengurangan adalah %d",nilai1 - nilai2);
	printf("\n hasil perkalian adalah %d",nilai1 * nilai2);
	printf("\n hasil pembagian adalah %d",nilai1 / nilai2);
	
	return 0;
}
