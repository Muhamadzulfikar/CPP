/* Nama file: floatingpoint.c */

#include <stdio.h>

const float PI = 3.141592653589793;

int main() {
  float r, luas, keliling;
  
  printf("PROGRAM LUAS & KELILING LINGKARAN\n\n");
  printf("Masukkan jari-jari: ");
  scanf("%f", &r);
  
  luas = PI * r * r;
  keliling = 2 * PI * r;
  
  printf("\nLuas \t\t= %.3f\n", luas);
  printf("Keliling \t= %.3f\n", keliling);
  
  return 0;
}
