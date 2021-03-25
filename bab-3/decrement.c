/* Nama file: decrement.c */

#include <stdio.h>

int main() {
  int a=5, b=5;
  
  printf("pre-decrement\n");
  printf("a   = %d\n", a);
  printf("--a = %d\n", --a);
  printf("a   = %d\n\n", a);
  
  printf("post-decrement\n");
  printf("b   = %d\n", b);
  printf("b-- = %d\n", b--);
  printf("b   = %d\n\n", b); 
    
  return 0;
}
