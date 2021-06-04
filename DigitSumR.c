////////////////////////////////////////////////////////
//Function Name:SumDigitR
//Input:512365 
//Output:22
//Description:Addition of Digits by using Recursion. 
//Date: 04/06/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////



#include<stdio.h>

int SumDigitR(int iNo)
{
    static int iSum = 0;
    if(iNo != 0)
    {
        iSum = iSum + (iNo % 10);
        iNo = iNo / 10;
        SumDigitR(iNo);
    }
    return iSum;
}

int SumDigitI(int iNo)
{
    int iSum = 0;
    while(iNo != 0)
    {
        iSum = iSum + (iNo % 10);
        iNo = iNo / 10;
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    iRet = SumDigitR(iValue);
    printf("Addition of digits is : %d\n",iRet);
    
    return 0;
}
