#include <stdio.h>
int main(void) {
  printf("enter two integers\n");
  int num1;
  int num2;
  scanf("%d %d", &num1, &num2);

  if (num1 == num2) {
    printf("%d is equal to %d\n", num1, num2);
  }

  if (num1 != num2) {
    printf("%d is less than %d\n", num1, num2);
  }

  if (num1 > num2) {
    printf("%d is greater than %d\n", num1, num2);
  }

  if (num1 <= num2) {
    printf("%d is less than or equal to %d\n", num1, num2);
  }

  if (num1 >= num2) {
    printf("%d is greater than o equal to %d\n", num1, num2);
  }
}
