/* Nama file: logika.c */

#include <stdio.h>

int cekGanjil(int val) {
   return val % 2 == 1;
}

int main() {
  int a, ganjil;
  
  printf("PROGRAM PENENTU GANJIL/GENAP\n\n");
  printf("Masukkan bilangan bulat: ");
  scanf("%d", &a);
  
  ganjil = cekGanjil(a);
  
  if (ganjil) {
	printf("%d adalah bilangan ganjil", a);
  } else {
    printf("%d adalah bilangan genap", a);
  }
  
  return 0;
}
