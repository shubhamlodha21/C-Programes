////////////////////////////////////////////////////////
//Function Name:CheckBits
//Input:172
//Output: 3rd,5th and 7th bit is On
//Description:Check Whether 3,5 and 7th Bit in On or off.
//Date: 31/05/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>
        
bool CheckBit(unsigned int iNo)
{
    unsigned int iMask = 0X00000054;  
    unsigned int iResult = 0;
    iResult = iNo & iMask;
    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    unsigned int iValue = 0;
    bool bRet;
    
    printf("Enter number\n");
    scanf("%u",&iValue);
    
    bRet = CheckBit(iValue);
    
    if(bRet == true)
    {
        printf("3,5,7 bits is on\n");
    }
    else
    {
        printf("Bits are off\n");
    }
    return 0;
}
