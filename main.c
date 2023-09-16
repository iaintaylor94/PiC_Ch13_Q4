// Macro to find the minimum of three values

#include <stdio.h>

#define MIN2(x, y) (x) < (y) ? (x) : (y)
#define MIN3(x, y, z) MIN2((x),MIN2((y), (z)))

int main(void) {

  int x = 4, y = 9, z = 1;
  printf ("The minimum of %d, %d and %d is %d\n", x, y, z, MIN3(x, y, z));
  
  return 0;
}