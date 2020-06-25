#include <stdio.h>
int main(void) {
  int a;
  int b;
  int c;
  puts("input three numbers:");
  if (scanf("%i\n%i\n%i", &a, &b, &c) == 3)

  {
    printf("%i", a + b + c);
  } else {
    puts("error");
  }
}
