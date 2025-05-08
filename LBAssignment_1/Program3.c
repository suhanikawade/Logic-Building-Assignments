/////////////////////////////////////////////////////////////////////////
//
// File name :       Program3.c
// Description:      Print 5 to 1 numbers on screen
// Author:           Suhani Mohan kawade
// Date:             8/05/2025
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display() 
{
    int i = 0;
    i = 5;
    while (i >= 1) 
    {
        printf("%d\n", i);
        i--;
    }
}
int main() 
{
    Display();
    return 0;
}
