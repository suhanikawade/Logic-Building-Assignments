/////////////////////////////////////////////////////////////////////////////////////////
//
// File name :       Program2.c
// Description:      Accept one number from user and print that number of * on screen
// Author:           Suhani Mohan kawade
// Date:             8/05/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo) 
{
    while (iNo > 0) {
        printf("* ");
        iNo--;  // Updater
    }
}

int main() 
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
