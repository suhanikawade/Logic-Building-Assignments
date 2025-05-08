///////////////////////////////////////////////////////////////////////////////
//
// File name :       Program4.c
// Description:      Accept one character and convert case of that character
// Author:           Suhani Mohan kawade
// Date:             8/05/2025
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayConvert(char CValue) 
{
    if (CValue >= 'a' && CValue <= 'z') 
    {
        printf("Converted character: %c\n", CValue - 32);  
    } else if (CValue >= 'A' && CValue <= 'Z') 
    {
        printf("Converted character: %c\n", CValue + 32);  
    } else 
    {
        printf("It is not an alphabet.\n");
    }
}

int main() 
{
    char cValue = '\0';

    printf("Enter character:\n");
    scanf(" %c", &cValue);  

    DisplayConvert(cValue);

    return 0;
}
