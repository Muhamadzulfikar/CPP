/* Nama file: inisialisasi.c */

#include <stdio.h>

int main() {
  int a=5, b, c=10;
  
  printf("Keadaan awal:\n");
  printf("a = %d\n", a);
  printf("b = %d\n", b);  /* menampilkan pesan peringatan */
  printf("c = %d\n", c);
  
  /* mengubah nilai */
  a = b = c = 99;
  
  printf("\nKeadaan akhir:\n");
  printf("a = %d\n", a);
  printf("b = %d\n", b);
  printf("c = %d\n", c); 
  
  return 0;
}
