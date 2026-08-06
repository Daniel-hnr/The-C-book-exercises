#include <stdio.h>
#include <stdlib.h>
int foo(int x, int y) { return x + y; }
int main(int argc, char *argv[]) {
  printf("test\n");
  int (*sum)(int, int) = foo;

  printf("%d\n", sum(9, 10));
  return EXIT_SUCCESS;
}
