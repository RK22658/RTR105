#include <stdio.h>
#include <math.h>
#include <limits.h>

int main() {
  double number;
  char choice;

  printf("Enter a decimal number: ");
  scanf("%lf", &number);

  printf("Choose the data type to use ((c) for char, (i) for int, or (l) long long): ");
  scanf(" %c", &choice);

  double result = 1.0;
  while (1) {
    switch (choice) {
      case 'c':
        if (result >= CHAR_MAX) {
          printf("Cannot calculate factorial with char data type for %lf.\n", number);
          return 1;
        }
        break;

      case 'i':
        if (result >= INT_MAX) {
          printf("Cannot calculate factorial with int data type for %lf.\n", number);
          return 1;
        }
        break;

      case 'l':
        if (number >= LONG_MAX) {
          printf("Cannot calculate factorial with long long data type for %lf.\n", number);
          return 1;
        }
        break;

      default:
        printf("Invalid data type selection. Please choose 'c', 'i', or 'l'.\n");
        return 1;
    }

    if (isinf(number) || isnan(number)) {
      printf("Cannot calculate factorial of infinity or NaN.\n");
      return 1;
    }

    if (number != 0)
    {
      result *= number;
      number--;
    }
     else {
      break;
    }
  }

  printf("The factorial of the number %lf.\n (data type %c) is: %.1lf\n", number, choice, result);

  return 0;
}

