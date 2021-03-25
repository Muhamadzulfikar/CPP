#include <stdio.h>
#include <conio.h>
int main ()
{
	int nilai1=70;
	int nilai2=50;
	int nilai3;
	int nilai4;
	int nilai;
	
	nilai3= nilai1+nilai2;
	nilai4= nilai1-nilai2;
	
	printf("\n program penjumlahan dan pengurangan pada bilangan integer mengunakan if else");
	printf("\n nilai 1 : 70");
	printf("\n nilai 2 : 50");
	printf("\n pilihan 1 adalah penjumlahan");
	printf("\n sebaliknya adalah pengurangan");
	printf("\n masukan pilihan anda :");
	scanf("%i",&nilai);
	if(nilai==1)
	printf("\n hasil penjumlahan adalah %i",nilai3);
	else
	printf("\n hasil pengurangan adalah %i",nilai4);
	getch();
	
}
