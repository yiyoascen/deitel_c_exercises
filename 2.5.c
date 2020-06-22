#include <stdio.h>

int main(void) {
  int integer1;
  int integer2;

  printf("enter the first number\n");
  scanf("%d", &integer1);

  printf("enter second integer\n");
  scanf("%d", &integer2);

  int sum = integer1 + integer2;

  printf("Sum is %d\n", sum);
}
