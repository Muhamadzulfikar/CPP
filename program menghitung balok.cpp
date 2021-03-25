#include <stdio.h>
#include <conio.h>
int main (){
	int p,l,t;
	int volume,luas;
	
	printf("\n program menghitung balok");
	printf("\n masukan panjang : ");
	scanf("%i",&p);
	printf("\n masukan lebar : ");
	scanf("%i",&l);
	printf("\n masukan tinggi : ");
	scanf("%i",&t);
	volume = p*l*t;
	luas = 2*((p*l)+(p*t)+(l*t));
	printf("\n hasil volume adalah %i",volume);
	printf("\n hasil luas adalah %i",luas);
	getch();
}
