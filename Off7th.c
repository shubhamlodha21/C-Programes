  
////////////////////////////////////////////////////////
//Function Name:ModifiedBits
//Input:79
//Output:15
//Description:Write a program which accept one number from user and off 7th bit of that number if it is on
//Date: 26/08/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<stdio.h>

int ModifiedBits(int iNo)
{
    int iMask=0x00000040;
    int iResult=0;

    iResult=iNo^iMask;

    return iResult;
}

int main()
{
    int iNo=0,iRet=0;
    printf("Enter a Number:");
    scanf("%d",&iNo);

    iRet=ModifiedBits(iNo);
    printf("Modified Number is :%d",iRet);
}