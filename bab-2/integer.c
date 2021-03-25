/* Nama file: integer.c */

#include <stdio.h>

int main() {
  int totalDetik, temp, hh, mm, ss;
  
  printf("PROGRAM KONVERSI DETIK KE HH:MM:SS\n\n");
  printf("Masukkan total detik: ");
  scanf("%d", &totalDetik);
  
  hh = totalDetik / 3600;
  temp = totalDetik % 3600;
  mm = temp / 60;
  ss = temp % 60;
  
  printf("\n%d detik sama dengan %d:%d:%d\n", 
    totalDetik, hh, mm, ss);
  
  return 0;
}
