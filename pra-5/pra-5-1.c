#include <stdio.h>  
#include <conio.h>  
int main ()  
    {  
        char upr[50];  
        printf (" Enter the upper case string: ");  
        gets (upr);
        printf (" \n The lowercase string is: %s", strlwr(upr));              
        return 0;  
    }