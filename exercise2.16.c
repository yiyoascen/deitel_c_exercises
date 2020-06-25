#include <stdio.h>
int main(void) {
  puts("enter three numbers");
  int a, b, c;
  scanf("%i%i%i", &a, &b, &c);
  printf("%i is the sum\n", a + b + c);
  printf("%i is the product\n", a * b * c);
  printf("%i is the difference\n", a - b - c);
  printf("%i is the remainder\n", a % b % c);
}
