////////////////////////////////////////////////////////
//Function Name:CheckBitsPosition
//Input:44 3 5
//Output: 3rd,5th is On.
//Description:Accept Positions from User  and Check thats Bits On or Off.
//Date: 31/05/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>        
bool CheckBit(unsigned int iNo, int iPos1, int iPos2)
{
    unsigned int iMask1 = 0X00000001, iMask2 = 0X00000001, iMask = 0X00000000;
    unsigned int iResult = 0;
    if((iPos1 < 1) || (iPos1 > 32) || (iPos2 < 1) || (iPos2 > 32))
    {   return false;}
    iMask1 = iMask1 << (iPos1 -1);
    iMask2 = iMask2 << (iPos2 -1);
    iMask = iMask1 | iMask2;
    iResult = iNo & iMask;
    if(iResult == iMask)
    {return true;}
    else
    {return false;}
}
int main()
{
    unsigned int iValue = 0,iPos1 = 0,iPos2 = 0;
    bool bRet;
    printf("Enter number\n");
    scanf("%u",&iValue);

    printf("Enter first position\n");
    scanf("%d",&iPos1);

    printf("Enter second position\n");
    scanf("%d",&iPos2);

    bRet = CheckBit(iValue,iPos1,iPos2);
    if(bRet == true)
    {
        printf("Bits are on\n");
    }
    else
    {
        printf("Bits are off\n");
    }
    return 0;
}
