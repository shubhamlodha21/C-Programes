/////////////////////////////////////////////////////////
//Function Name:Chk15Bit
//Input:131088
//Output:5th and 18th Bit in On..!
//Description:Write a program which checks whether 5th & 18th bit is On or OFF.
//Date: 22/08/2021
//Author: Shubham Lodha
//////////////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iMask=0x00020010;
    int iResult=0;

    iResult=iNo & iMask;

    if(iResult==iMask)
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
    int iNo=0,iRet=0;
    printf("Enter a Number\n");
    scanf("%d",&iNo);

    iRet=ChkBit(iNo);
    if(iRet==true)
    {
        printf("5th and 18th Bit is On..!");
    }
    else
    {
        printf("5th and 18th Bit is Off..!");
    }
    return 0;
}
