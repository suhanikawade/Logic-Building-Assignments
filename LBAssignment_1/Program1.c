/////////////////////////////////////////////////////////////////////////
//
// File name :       Program1.c
// Description:      Program to divide two numbers
// Author:           Suhani Mohan kawade
// Date:             8/05/2025
//
/////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int Divide(int iNo1,int iNo2)
{
    int iAns = 0;
    if(iNo2 == 0)
    {
        return -1;
    }
    iAns = iNo1 / iNo2;
    return iAns;
}
int main()
{
    int iValue1 = 15,iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1,iValue2);
     
    printf("Divide is %d\n",iRet);
    return 0;
}