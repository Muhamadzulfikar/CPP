#include <stdio.h>
#include <math.h>

double hipotenusa(double a, double b){
	double c = sqrt(pow(a,2) + pow(b,2));
}

int main(){
	double panjang, tinggi, sisimiring;
	
	printf("\n program hipotenusa(segita sisi miring)");
	printf("\n Masukan panjang:");
	scanf("%lf", &panjang);
	printf("\n Masukan lebar:");
	scanf("%lf", &tinggi);
	
	sisimiring = hipotenusa(panjang, tinggi);
	
	printf("\n sisi miring segita siku siku: %.2lf", sisimiring);
	
	return 0;
}
