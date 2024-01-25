#include <stdio.h>
#include <math.h>
#include <limits.h>

int main() {
  long long number;
  char choice;

  printf("Enter a decimal number: ");
  scanf("%lld", &number);

  printf("Choose the data type to use ((c) for char, (i) for int, or (l) long long): ");
  scanf(" %c", &choice);

  long long result = 1; 
  while (1) {
    switch (choice) {
      case 'c':
        if (result >= CHAR_MAX) 
        { 
          printf("Cannot calculate factorial with char data type for %lld.\n", number);
          return 0;
        }
        break;

      case 'i':
        if (result >= UINT_MAX) 
        { 
          printf("Cannot calculate factorial with int data type for %lld.\n", number);
          return 0;
        }
        break;

      case 'l':
        if (number >= LONG_MAX) 
        { 
          printf("Cannot calculate factorial with long long data type for %lld.\n", number);
          return 0;
        }
        break;

      default:
        printf("Invalid data type selection. Please choose 'c', 'i', or 'l'.\n");
        return 0;
    }


    if (number != 1) {
      result *= number;
      number--;
    } else {
      break;
    }
    
  }

  printf("The factorial of the number %lld (data type %c) is: %llu\n", number, choice, result);

  return 0;
}
