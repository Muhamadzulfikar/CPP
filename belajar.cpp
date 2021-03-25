#include <stdio.h>
int main(){
	float a,t,luas;
	
	printf("\n program luas segitiga");
	printf("\n masukan alas : ");
	scanf("%f",&a);
	printf("\n masukan tinggi : ");
	scanf("%f",&t);
	luas = (a*t)/2;
	printf("\n luas segita : %f",luas);
	return 0;
}
