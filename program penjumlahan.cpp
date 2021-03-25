#include <stdio.h>
#include <conio.h>
int main(){
	// tipe data
int NILAI1 ;
int NILAI2 ;
int HASILJUMLAH ;
int HASILKURANG ;
printf("\n PROGRAM PENJUMLAHAN & PENGURAGAN X TKJ 1");
printf("\n NAMA KELOMPOK	: 1. muhamad zulfikar");
printf("\n NAMA KELOMPOK	: 2. rudi syahputra ");
printf("\n Inputkan NILAI 1 : ");
scanf("%i",&NILAI1);
printf("\n Inputkan NILAI 2	: ");
scanf("%i",&NILAI2);
HASILJUMLAH = NILAI1+NILAI2;
printf("\n Hasil Penjumlahan adalah %i",HASILJUMLAH);

HASILKURANG = NILAI1-NILAI2;
printf(" Hasil Pengurangan adalah %i",HASILKURANG);
getch();
}
