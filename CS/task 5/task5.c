#include <stdio.h>

void main()
{
    long long num;
    char charNum = 1;
    long long longNum = 1;
    int intNum = 1;
    char choice;
    printf(" Enter a Decimal Number: ");
    scanf("%lld99", &num);
    printf(" Enter the Data type (c) for char, (i) for int, (l) for long long \n: ");
    scanf(" %c99", &choice);
    if(choice == 'c')
    {
        char reference = 1;
        for(int counter = 1;counter < num; counter++)
        {
        
            charNum *= (counter + 1);
            reference *= counter;
            if((charNum/(counter + 1)) != reference){
                
                printf("Selected Data type is too small to store number %lld\n", num);
            
                break;
            }
        }
        if(charNum == reference * num)
        {
            printf("Factorial: %d\n", num, charNum); 
        }
        
    
    
    }else if(choice == 'i')
    {
        int reference = 1;
        for(int counter = 1;counter < num; counter++)
        {
        
            intNum *= (counter + 1);
            reference *= counter;
            if(intNum/(counter + 1) != reference){
                
                printf("Selected data type is too small to store number %lld\n", num);
            
                break;
            }
        }
        if(intNum == reference * num)
        {
            printf("Factorial: %d\n", num, intNum); 
        }
    }else if(choice == 'l')
    {
        long long reference = 1;
        for(long long counter = 1;counter < num; counter++)
        {
        
            longNum *= (counter + 1);
            reference *= counter;
            if(longNum/(counter + 1) != reference){
                
                printf("Selected data type is too small to store number %lld\n", num);
            
                break;
            }
        }
        if(longNum == reference * num)
        {
            printf("Factorial: %lld\n", num, longNum); 
        }
    }
}
