/* Nama file: integer1.c */

#include <stdio.h>

int main() {
  unsigned char x, y;
  
  x = 100;  /* benar, 100 berada di dalam rentang 0..255 */
  printf("x = %d\n", x);
  y = 257;  /* salah, 257 berada di luar rentang 0..255 */
  printf("y = %d\n", y);  /* menampilkan 1, bukan 257 */
  
  return 0;
}
