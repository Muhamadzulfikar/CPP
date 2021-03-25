/* Nama file: bitwise.c */

#include <stdio.h>

int main() {
  int a = 8;
  int b = 10;

   /* menampilkan nilai a dan b */
  printf("Nilai a: %d\n", a);
  printf("Nilai b: %d\n", b);

  printf("\nBitwise AND:\n");
  printf("a & b: %d\n", a & b);

  printf("\nBitwise OR:\n");
  printf("a | b: %d\n", a | b);

  printf("\nBitwise XOR:\n");
  printf("a ^ b: %d\n", a ^ b);

  printf("\nBitwise NOT:\n");
  printf("~a: %d\n", ~a);
  printf("~b: %d\n", ~b);

  printf("\nBitwise SHIFT RIGHT:\n");
  printf("a >> 1: %d\n", a >> 1);
  printf("b >> 1: %d\n", b >> 1);

  printf("\nBitwise SHIFT LEFT:\n");
  printf("a << 1: %d\n", a << 1);
  printf("b << 1: %d\n", b << 1);

  return 0;
}
