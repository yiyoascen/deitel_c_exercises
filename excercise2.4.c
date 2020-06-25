#include <stdio.h>
int main(void) {
  int a, b, c;
  printf("%s", "insert 3 numbers:\n");
  scanf("%i%i%i", &a, &b, &c);
  int result = a + b + c;
  printf("%i", result);
}
