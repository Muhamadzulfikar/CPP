/* Nama file: logika.c */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int a;
  
  printf("Masukkan bilangan bulat (0..9): ");
  scanf("%d", &a);
  
  if (a < 0 || a > 9) {
    printf("ERROR: Nilai di luar rentang");
    exit(EXIT_FAILURE);
  }
  
  printf("Anda memasukkan nilai %d", a);
    
  return 0;
}
