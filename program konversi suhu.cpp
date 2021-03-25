#include <stdio.h>
#include <conio.h>
int main ()
{
	//tipe data
	float c,r,f;
	
	printf("\n program konversi suhu ");
	printf("\n masukan nilai celcius : ");
	scanf("%f",&c);
	r = c*0.8;
	f = c*1.8+32;
	printf("\n hasil konversi suhu dari c ke r adalah : %f",r,"reamur");
	printf("\n hasil koversi suhu dari c ke f  adalah : %f",f);
	getch();
}
