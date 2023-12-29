#include <stdio.h>
#include <limits.h>

int main() {
  int number;
  char data_type;

  printf("Enter a decimal number: ");
  scanf("%d", &number);

  printf("Enter data type (char(c) / int(i) / long long(l)): ");
  scanf(" %c", &data_type);

  if (data_type == 'c') {
    char factorial = 1;
    for (int i = 1; i <= number; i++) {
      if (factorial > 255) {
        printf("Cannot calculate factorial with char data type.\n");
        return 0;
      }
      factorial = factorial * i;
    }
    printf("The factorial of %d is %d (char data type).\n", number, factorial);
  } else if (data_type == 'i') {
    int factorial = 1;
    for (int i = 1; i <= number; i++) {
      if (factorial > INT_MAX) {
        printf("Cannot calculate factorial with int data type.\n");
        return 0;
      }
      factorial = factorial * i;
    }
    printf("The factorial of %d is %d (int data type).\n", number, factorial);
  } else if (data_type == 'l') {
    long long factorial = 1;
    for (long long i = 1; i <= number; i++) {
      if (factorial > LLONG_MAX) {
        printf("Cannot calculate factorial with long long data type.\n");
        return 0;
      }
      factorial = factorial * i;
    }
    printf("The factorial of %d is %lld (long long data type).\n", number, factorial);
  } else {
    printf("Invalid data type.\n");
    return 0;
  }

  return 0;
}
