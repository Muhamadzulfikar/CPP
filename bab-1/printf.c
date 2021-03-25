#include <stdio.h>

int main() {
  int a = 9;
  int *p = &a;
  float b = 1234.5678;
  long c = 1234567;
  char d[10] = "Sintaks C";  
  
  printf("a = %d\n", a);
  printf("b = %f\n", b);
  printf("b = %E\n", b);
  printf("c = %ld\n", c);
  printf("d = \"%s\"\n", d);
  printf("p = %p\n", p);  
  
  return 0;
}
