#include <stdio.h>
#include <math.h>
void kalkulator(){
	float nilai1;
	float nilai2;
	int hasiltambah;
	int hasilkurang;
	int hasilkali;
	float hasilbagi;
	int nilai;
	printf("\n kalkulator");
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
}

void phytagoras(){
		float nilai1;
	float nilai2;
	float a;
	float b;
	float c;
	float nilai;
	
	printf("\n program phytagoras");
	printf("\n                  / |");
	printf("\n             C  /   |");
	printf("\n               /    | A");
	printf("\n              /     |");
	printf("\n            /_______|");
	printf("\n               B ");

	
	printf("\n masukan nilai 1 (a/b) :");
	scanf("%f",&nilai1);
	printf("\n masukan nilai 2 (b/c) :");
	scanf("%f",&nilai2);
	a=sqrt(pow(nilai2,2)-pow(nilai1,2));
	b=sqrt(pow(nilai2,2)-pow(nilai1,2));
	c=sqrt(pow(nilai2,2)+pow(nilai1,2));
	printf("\n pilihan 1 mencari a");
	printf("\n pilihan 2 mencari b");
	printf("\n pilihan 3 mencari c");
	printf("\n masukan pilihan anda :");
	scanf("%f",&nilai);
	if(nilai==1)
	printf("\n hasilnya adalah %f",a);
	if(nilai==2)
	printf("\n hasilnya adalah %f",b);
	if(nilai==3)
	printf("\n hasilnya adalah %f",c);
}

int main(){
	int nilai1;
	printf("\n  ");
	printf("\n program matematika");
	printf("\n by muhamad zulfikar");
	printf("\n pilihan 1 : kalkulator");
	printf("\n pilihan 2 : phytagoras");
	printf("\n masukan pilihan anda : ");
	scanf("%i",&nilai1);
	if(nilai1==1){
		kalkulator();
	}
	if(nilai1==2){
		phytagoras();
	}
	
	main();
}
