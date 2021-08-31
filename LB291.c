////////////////////////////////////////////////////////
//Function Name:ChkBit
//Input:10  2 
//Output:true
//Description:accept one number and position from user and check whether bit at that position is on or off. If bit is one return TURE otherwise return FALSE
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
    else if(iRet==false)
    {
        printf("Bit at %d is OFF" ,iPos);
    }
    else
    {
         printf("Bit at %d is ON",iPos);
    }

}