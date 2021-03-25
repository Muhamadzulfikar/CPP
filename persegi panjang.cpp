//progrram bagun datar
#include <stdio.h>
#include <conio.h>
int main(){
	//tipe data
	int p,le,luas,keliling;
	
	printf("\n program persegi panjang");
	printf("\n masukan panjang : ");
	scanf("%i",&p);
	printf("\n masukan lebar : ");
	scanf("%i",&le);
	luas = p*le;
	printf("\n hasilnya adalah %i",luas);
	keliling = (2*p)+(2*le);
	printf("\n hasilnya adalah %i",keliling);
	getch();
	
}
