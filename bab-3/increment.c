/* Nama file: increment.c */

#include <stdio.h>

int main() {
  int a=5, b=5;
  
  printf("pre-increment\n");
  printf("a   = %d\n", a);
  printf("++a = %d\n", ++a);
  printf("a   = %d\n\n", a);
  
  printf("post-increment\n");
  printf("b   = %d\n", b);
  printf("b++ = %d\n", b++);
  printf("b   = %d\n\n", b); 
    
  return 0;
}
