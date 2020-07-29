#include <stdio.h>

int main()
{
   char aString[] = "Hello";
   char aString1[] = "Dog";
   char aString2[] = "Cat";
   char aString3[] = "Fish";
   
   char allMsg[100]; // Array
   
   printf(aString);
   printf("\n");
   printf("Message is %s\n", aString);
   printf("%s %s,%s,%s\n", aString, aString1, aString2, aString3);
   
   sprintf(allMsg, "%s %s,%s,%s\n", aString, aString1, aString2, aString3);
   
   printf(allMsg);
    
return 0;
}
