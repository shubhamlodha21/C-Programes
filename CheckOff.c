////////////////////////////////////////////////////////
//Function Name:CheckOff
//Input:10 2
//Output: 2nd Bit is OFF
//Description:Accept Position From user and Check that Bit is Off
//Date: 31/05/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>
unsigned int OffBit(unsigned int iNo, int iPos)
{
    unsigned int iMask = 0X00000001;
    unsigned int iResult = 0;
    if((iPos < 1) || (iPos > 32))
    {   return 0;}
    
    iMask = iMask << (iPos-1);
    
    iMask = ~iMask;
    
    iResult = iNo & iMask;
    return iResult;
}

int main()
{
    unsigned int iValue = 0,iPos = 0, iRet = 0;
    printf("Enter number\n");
    scanf("%u",&iValue);
    printf("Enter position\n");
    scanf("%d",&iPos);
    
    iRet = OffBit(iValue,iPos);
    
    printf("New number is : %u\n",iRet);
    return 0;
}





































