/////////////////////////////////////////////////////////////////////////////////////////////////////
//
// File name :       Program4.c
// Description:      Accept 2 number from user and display first number in second number of times
// Author:           Suhani Mohan kawade
// Date:             8/05/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo,int iFrequency) 
{
    int iCnt = 0;

    for(iCnt = 1;iCnt <= iFrequency;iCnt++) 
    {
        printf("%d ", iNo);
    }
}

int main() 
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    printf("Enter frequency: ");
    scanf("%d", &iCount);

    if (iCount <= 0) 
    {
        printf("Invalid frequency\n");
        return 0;
    }

    Display(iValue, iCount);

    return 0;
}
