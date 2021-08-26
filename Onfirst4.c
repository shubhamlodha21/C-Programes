  
////////////////////////////////////////////////////////
//Function Name:Onbits
//Input:73
//Output:79
//Description:Write a program which accept one number from user and on its first 4 bits. Return modified number
//Date: 26/08/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<stdio.h>

int Toggle(int iNo)
{
    int iMask=0x0000000F;
    int iResult=0;

    iResult=iNo|iMask;

    return iResult;
}

int main()
{
    int iNo=0,iRet=0;
    printf("Enter a Number:");
    scanf("%d",&iNo);

    iRet=Toggle(iNo);
    printf("Modified Number is :%d",iRet);
}