#include <stdio.h>  
int main()  
{  
   int i, vCount = 0,cCount=0;  
   char str[100] ;
   printf("enter the string:");
    scanf("%s",&str[i]);
   for(i = 0; i < strlen(str); i++){  
       str[i] = tolower(str[i]);  
       if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') 
	   	{  
            vCount++;  
        }
		else
		{
			cCount++;
		}  
   }  
   printf("Number of vowels : %d\n", vCount); 
   printf("number of consonants=%d",cCount);
   return 0;  
} 
