#include <stdio.h>

int main() 
{
    int num1, num2, num3;
    printf("Enter the first decimal number: ");
    scanf("%d", &num1);

    printf("Enter the second decimal number: ");
    scanf("%d", &num2);

    printf("Enter the third decimal number: ");
    scanf("%d", &num3);

    char order;
    printf("Enter 'a' for ascending order or 'd' for descending order: ");
    scanf(" %c", &order);

    {
        if (num1 > num2) 
        {
            int temp = num1;
            num1 = num2;
            num2 = temp;
        }
        if (num2 > num3) 
        {
            int temp = num2;
            num2 = num3;
            num3 = temp;
        }
        if (num1 > num2) 
        {
            int temp = num1;
            num1 = num2;
            num2 = temp;
        }
        if (order == 'a') 
        {
            printf("The Ascending Order For Your Numbers Are :- \n%d, %d, %d\n", num1, num2, num3);
        }
     else if (order == 'd') 
     {
        printf("The Descending Order For Your Numbers Are:- \n%d, %d, %d\n", num3, num2, num1);
     }
    }
    return 0;
}
