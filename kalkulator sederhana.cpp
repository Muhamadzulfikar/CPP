#include <stdio.h>
#include <conio.h>
int main () {
	//tipe data
	float nilai1;
	float nilai2;
	int hasiljumlah;
	int hasilkurang;
	int hasilkali;
	float hasilbagi;
	int hasilpangkat;
	int pangkat3;
	
	printf("\n kalkulator sederhana ");
	printf("\n by muhamad zulfikar");
	printf("\n program aritmatika");
	printf("\n penjumlahan");
	printf("\n pengurangan");
	printf("\n perkalian");
	printf("\n pembagian");
	printf("\n pemangkatan");
	printf("\n pemangkatan 3");
	printf("\n inputkan nilai 1 :");
	scanf("%f",&nilai1);
	printf("\n inputkan nilai 2 :");
	scanf("%f",&nilai2);
	hasiljumlah = nilai1+nilai2;
	printf("\n hasil penjumlahan adalah %i",hasiljumlah);
	hasilkurang=nilai1-nilai2;
	printf("\n hasil pengurangan adalah %i",hasilkurang);
	hasilkali= nilai1*nilai2;
	printf("\n hasil perkalian adalah %i",hasilkali);
	hasilbagi= nilai1/nilai2;
	printf("\n hasil pembagian adalah %f",hasilbagi);
	hasilpangkat= nilai1*nilai1;
	printf("\n hasil pemangkatan adalah %i",hasilpangkat);
	pangkat3= nilai1*nilai1*nilai1;
	printf("\n hasil pemangkatan 3 adalah %i",pangkat3);
	
	
	
	getch ();
}
