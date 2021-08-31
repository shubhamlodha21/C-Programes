////////////////////////////////////////////////////////////
//Function Name:ChkBit
//Input:10  2 
//Output:8
//Description:Write a program which accept one number and position from user and off that bit. Return modified number
//Date: 31/08/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

int ChkBit(int iNo,int iPos)
{
    if((iPos>=33) || (iPos<0))
    {
        return -1;
    }
    unsigned int iMask=0X00000001;
    int iResult=0;

    iMask=iMask<<(iPos-1);

    iResult=iNo&iMask;
    
    return iResult;
}

int main()
{
    int iNo=0,iPos=0,iRet=0;

    printf("Enter a Number:");
    scanf("%d",&iNo);

    printf("Enter a  Position:");
    scanf("%d",&iPos);

    iRet=ChkBit(iNo,iPos);
    if(iRet==-1)
    {
        printf("Invalid Position..!\n");
    }
    else
    {
        printf("Modified Number is %d",iRet);
    }

}