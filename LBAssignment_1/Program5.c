///////////////////////////////////////////////////////////////////////////////////////
//
// File name :       Program5.c
// Description:      Accept number from user and print that number of * on screen
// Author:           Suhani Mohan kawade
// Date:             8/05/2025
//
////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Accept(int iNo) 
{
    int iCnt = 0;
    for (iCnt = 1; iCnt <= iNo; iCnt++) {
        printf("* ");
    }
    printf("\n");
}

int main() {
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    Accept(iValue);

    return 0;
}
