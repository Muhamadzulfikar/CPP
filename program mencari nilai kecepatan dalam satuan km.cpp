#include <stdio.h>
#include <conio.h>
int main ()
{
	//tipe data
	float s,t,v;
	
	printf("\n mencari nilai kecepatan dalam satuan km");
	printf("\n masukan jarak yang akan ditempuh : ");
	scanf("%f",&s);
	printf("\n masukan waktu tempuh : ");
	scanf("%f",&t);
	v = s/t;
	printf("\n kecepatan adalah : %f",v);
	printf("   km/jam");
	getch();
}
