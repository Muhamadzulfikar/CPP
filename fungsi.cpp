#include <stdio.h>
#include <stdlib.h>
#include <string>
double tambah(double a, double b){
	return a+b;
}
double kurang(double a, double b){
	return a-b;
}
double kali(double a, double b){
	return a*b;
}
double pangkat_a(double a){
	return a*=a;
}
double pangkat_b(double b){
	return b*=b;
}
int main(){
	double a;
	double b;
	
	printf("\n Masukan a: ");
	scanf("%lf", &a);
	printf("\n Masukan b: ");
	scanf("%lf", &b);
	printf("\n a + b : %lf", tambah(a, b));
	printf("\n a - b : %lf", kurang(a , b));
	printf("\n a * b : %lf", kali(a, b));
	printf("\n a * a : %lf", pangkat_a(a));
	printf("\n b * b : %lf", pangkat_b(b));
	return 0;
}
