#include <stdio.h>

long long faktorial(int x){
	if(x == 0){
		return 1;	
	}
	else{
		return x * faktorial(x-1);
	}
}

int main(){
	int a;
	long long f;
	
	printf("\n Program faktorial");
	printf("\n Masukan bilangan bulat:");
	scanf("%d", &a);
	
	f = faktorial(a);
	
	printf("\n Faktorial %d! : %lld", a, f);
	return 0;
}
