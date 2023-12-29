#include <stdio.h>

int main() 
{
  int num;
  printf("Enter a decimal number: ");
  scanf("%d", &num);
  char type;
  printf("Choose data type: char (c), int (i), or long long (l): ");
  scanf(" %c", &type);

  if (type != 'c' && type != 'i' && type != 'l') 
   {
    printf("Invalid data type");
    return 1;
   }
  int result;
  switch (type) 
  {
    case 'c':
      result = 1;
      while (result <= num) 
     {
        result *= result;
        if (result == -1)
        {
          printf("Cannot calculate factorial with char data type");
          return 0;
        }
      }
      printf("Factorial of %d with char data type: %d\n", num, result);
      break;
    case 'i':
      result = 1;
      while (result <= num) 
     {
        result *= result;
        if (result == -1)
        {
          printf("Cannot calculate factorial with int data type");
          return 0;
        }
      }
      printf("Factorial of %d with int data type: %d\n", num, result);
      break;
    case 'l':
      long long result2 = 1;
      while (result2 <= num) 
      {
        result2 *= result2;
        if (result2 < 0) 
        {
          printf("Cannot calculate factorial with long long data type");
          return 0;
        }
      }
      printf("Factorial of %d with long long data type: %lld\n", num, result2);
      break;
  }

  return 0;
}
