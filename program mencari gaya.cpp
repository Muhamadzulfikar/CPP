#include <stdio.h>
#include <conio.h>
int main ()
{
	//tipe data
	int f,m,a;
	printf("\n program mencari gaya");
	printf("\n masukan massa : ");
	scanf("%i",&m);
	printf("\n masukan percepatan : ");
	scanf("%i",&a);
	f = m*a;
	printf("\n besar gaya tersebut adalah :  %i",f);
	getch();
}
