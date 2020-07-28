#include <stdio.h>

int main()
{
    // data type - integer
    int money = 10;
    int a = 20;
    int b = 5;
    
    float moneyFloat = 10.123;
    char letter = 'b';
    char greeting[] = "Hello"; // array
    
    printf("money=%d, a=%d, b=%d, moneyFloat=%.3f, letter=%c, greeting=%s",
           money,a,b,moneyFloat,letter, greeting );
    
    
    return 0;
}
