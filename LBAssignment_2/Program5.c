///////////////////////////////////////////////////////////
//
// File name :       Program5.c
// Description:      Check number is even or odd
// Author:           Suhani Mohan kawade
// Date:             8/05/2025
//
//////////////////////////////////////////////////////////

#include <stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkEven(int iNo) 
{
    if (iNo % 2 == 0) 
    {
        return TRUE;
    } else {
        return FALSE;
    }
}

int main() 
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number: ");
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);

    if (bRet == TRUE) {
        printf("Number is Even\n");
    } else {
        printf("Number is Odd\n");
    }

    return 0;
}
