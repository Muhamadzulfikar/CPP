/* Nama file: variabel.c */

#include <stdio.h>

int main() {
  float a, t, luas;
  
  printf("PROGRAM LUAS SEGITIGA\n\n");
  printf("Masukkan alas: ");
  scanf("%f", &a);
  printf("Masukkan tinggi: ");
  scanf("%f", &t);
  
  luas = (a * t) / 2;
  
  printf("\nLuas segitiga = %f\n", luas);
  
  return 0;
}
