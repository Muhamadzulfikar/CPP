#include <stdio.h>
#include <conio.h>
int main(){
	int s,keliling,luas;
	
	printf("\n program menghitung persegi");
	printf("\n masukan sisi : ");
	scanf("%i",&s);
	keliling = 4*s;
	luas = s*s;
	printf("\n hasil keliling adalah %i",keliling);
	printf("\n hasil luas adalah %i",luas);
	getch();
}
