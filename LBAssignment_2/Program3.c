/////////////////////////////////////////////////////////////////////////////////////////
//
// File name :       Program3.c
// Description:      If number is less than 10 then print "Hello" otherwise print "Demo"
// Author:           Suhani Mohan kawade
// Date:             8/05/2025
//
/////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo) 
{
    if (iNo < 10) {
        printf("Hello\n");
    } else {
        printf("Demo\n");
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
