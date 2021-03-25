#include <stdio.h>
int main (){
	float nilai1;
	float nilai2;
	int hasiltambah;
	int hasilkurang;
	int hasilkali;
	float hasilbagi;
	int nilai;
	printf("\n program penjumlahan bilangan real mengunakan if else");
	printf("\n by muhamad zulfikar");
	printf("\n masukan nilai 1 :");
	scanf("%f",&nilai1);
	printf("\n masukan nilai 2 :");
	scanf("%f",&nilai2);
	hasiltambah= nilai1+nilai2;
	hasilkurang= nilai1-nilai2;
	hasilkali= nilai1*nilai2;
	hasilbagi= nilai1/nilai2;
	printf("\n pilihan 1 adalah penjumlahan");
	printf("\n pilihan 2 adalah pengurangan");
	printf("\n pilihan 3 adalah perkalian");
	printf("\n pilihan 4 adalah pembagian");
	printf("\n masukan pilihan anda :");
	scanf("%i",&nilai);
	if(nilai==1)
	printf("\n hasil penjumlahan adalah : %i",hasiltambah);
	if(nilai==2)
	printf("\n hasil pengurangan adalah : %i",hasilkurang);
	if(nilai==3)
	printf("\n hasil perkalian adalah : %i",hasilkali);
	if(nilai==4)
	printf("\n hasil pembagian adalah : %f",hasilbagi);
	return 0;
	
	
}
