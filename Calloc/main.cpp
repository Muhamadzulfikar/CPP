#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char *s;
	s = (char *) calloc(20, sizeof(char));
	strcpy(s, "Saya sedang belajar c++");
	printf("%s", s);
	return 0;
}
