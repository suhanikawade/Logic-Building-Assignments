///////////////////////////////////////////////////////////////////////////////////////////////////////
//
// File name :       Program1.c
// Description:      Accept the number form user and print that number of even numbers on screen
// Author:           Suhani Mohan kawade
// Date:             8/05/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void PrintEven(int iNo) 
{
    if (iNo <= 0)
        return;

    int iCnt = 0;
    int iNum = 2;

    for (iCnt = 1; iCnt <= iNo; iCnt++) {
        printf("%d ", iNum);
        iNum += 2; // next even number
    }

    printf("\n");
}

int main() 
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0;
}
