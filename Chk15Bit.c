////////////////////////////////////////////////////////
//Function Name:Chk15Bit
//Input:16384
//Output:15th Bit in On..!
//Description:Write a program which checks whether 15th bit is On or OFF
//Date: 22/08/2021
//Author: Shubham Lodha
//////////////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iMask=0x00004000;
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
        printf("15th Bit is On..!");
    }
    else
    {
        printf("15th Bit is Off..!");
    }
    return 0;
}