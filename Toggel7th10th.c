  
////////////////////////////////////////////////////////
//Function Name:Toggle
//Input:137
//Output:713
//Description:Write a program which accept one number from user and toggle 7th and 10th bit of that number
//Date: 26/08/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<stdio.h>

int Toggle(int iNo)
{
    int iMask=0x00000240;
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