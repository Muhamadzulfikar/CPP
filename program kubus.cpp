#include <stdio.h>
#include <conio.h>
#include <math.h>
int main (){
	int s,volume,luas;
	
	printf("\n program menghitung kubus");
	printf("\n masukan sisi : ");
	scanf("%i",&s);
	volume = pow(s,3);
	luas = 6*(pow(s,2));
	printf("\n hasil volume adalah %i",volume);
	printf("\n hasil luas adalah %i",luas);
	getch();
}
