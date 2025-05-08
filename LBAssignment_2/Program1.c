/////////////////////////////////////////////////////////////////////////////////////////
//
// File name :       Program1.c
// Description:      Accept one number from user and print that number of * on screen
// Author:           Suhani Mohan kawade
// Date:             8/05/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void Display(int iNo) 
{
    int iCnt = 0;

    while (iCnt < iNo) {
        printf("* ");
        iCnt++; // Updater
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
