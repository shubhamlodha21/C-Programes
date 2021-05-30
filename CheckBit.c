////////////////////////////////////////////////////////
//Function Name:CheckBit
//Input:17
//Output:5th Bit is On
//Description:Check Whether 5 th Bit is On or Off
//Date: 30/05/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>
        
bool CheckBit(unsigned int iNo)
{
    unsigned int iMask = 0x00000010;
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
        printf("5th bit is on\n");
    }
    else
    {
        printf("5th bit is off\n");
    }
    return 0;
}