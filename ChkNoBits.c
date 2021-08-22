////////////////////////////////////////////////////////
//Function Name:ChkBits
//Input:448
//Output:7th & 8th & 9th bit is On..!
//Description:Write a program which checks whether 7th & 8th & 9th bit is On or OFF.
//Date: 22/08/2021
//Author: Shubham Lodha
//////////////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iMask=0x000001C0;
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
        printf("7th & 8th & 9th bit is On..!");
    }
    else
    {
        printf("7th & 8th & 9th bit is Off..!");
    }
    return 0;
}