#include <stdio.h>
int main () {
	int n=0;
	while (n<20){
		if(n % 2 == 1) printf("%d",n);
		n++;
	}
	return 0;
}
