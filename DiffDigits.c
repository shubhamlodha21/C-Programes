///////////////////////////////////////////////////////////////////
//Function Name:DiffDigit
//Input:89451
//Output:8 (9-1)
//Description: Accept number from user and Find Difference of Digits.
//Date: 17/05/2021
//Author: Shubham Lodha
//////////////////////////////////////////////////////////////////

#include<stdio.h>

int MaxMinD(int iNo)
{
    int iMax = 0, iMin = 9, iDigit = 0;
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit > iMax)
        {
            iMax = iDigit;
        }
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        iNo = iNo / 10;
    }
    return iMax - iMin;
}

int main()
{
    int iValue1 = 0, iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue1);
    iRet = MaxMinD(iValue1);
    
    printf("Diffrence is :%d\n",iRet);
    return 0;
}
