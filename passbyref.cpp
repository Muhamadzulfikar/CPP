#include <stdio.h>

void tukar(int *a, int *b){
	int c = *a;
	*a = *b;
	*b = c;
}

int main(){
	int x, y;
	
	x = 100;
	y = 200;
	
	printf("\n Sebelum ditukar");
	printf("\n x : %d", x);
	printf("\n y : %d", y);
	
	tukar(&x, &y);
	
	printf("\n Setelah ditukar");
	printf("\n x : %d", x);
	printf("\n y : %d", y);
	
	return 0;
}
