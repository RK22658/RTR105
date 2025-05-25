#include <stdio.h>
int main()
{

unsigned char num;

printf("enter a natural number <255 :-");
scanf("%c", &num);

printf("binary representation of %c is: ", num);

for (int i = 7; i>=0; i--)
{
unsigned char bit = (num >> i) & 1;
printf ("%c", bit);
}
printf("\n");

return 0;
}
