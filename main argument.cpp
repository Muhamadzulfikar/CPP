#include <stdio.h>

int main(int a, char *b[3]){
	int i;
	a = 3;
	
	b[0]="Hai";
	
	for(i=0; i<a; i++){
		printf("\n Argumen ke %d : %s", i, b[i]);
	}
	return 0;
}
