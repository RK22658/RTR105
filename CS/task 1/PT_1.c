#include <stdio.h>

 int main()
{
long long num1, num2, result;

 printf("enter the first number (400000):-");
 scanf("%lld", &num1);

 printf("enter the second number (100000):-");
 scanf("%lld", &num2);

result = num1 * num2;
printf("the result is: %lld\n", result);

return 0;
}
