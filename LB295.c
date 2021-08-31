////////////////////////////////////////////////////////////
//Function Name:ChkBit
//Input:
//Output:
//Description:Write a program which accept one number from user and toggle contents of first and last nibble of the number. Return modified number
//Date: 31/08/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

int ChkBit(int iNo)
{

    unsigned long int iMask=0xF000000F;
    unsigned long  int iResult=0;

    iResult=iMask^iNo;
    
    return iResult;
}

int main()
{
    unsigned long int iNo=0,iPos=0;
    unsigned long int iRet=0;

    printf("Enter a Number:");
    scanf("%d",&iNo);

    iRet=ChkBit(iNo);
    
    printf("Modified Number is %d",iRet);

    return 0;

}