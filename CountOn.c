////////////////////////////////////////////////////////
//Function Name:CountOn
//Input:10 
//Output: 2
//Description:Count Number of ON bits
//Date: 31/05/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////
#include<stdio.h>

int CountBit(unsigned int iNo)
{
    unsigned int iMask = 0X00000001, iResult = 0;               
    for(i = 0; i < 32; i++)
    {
        iResult = iNo & iMask;
        if(iResult == iMask)
        {
            iCnt++;
        }
        iMask = iMask << 1;
    }
    return iCnt;
}
    
int main()
{
    unsigned int iValue = 0;
    int iRet = 0;
    printf("Enter number\n");
    scanf("%u",&iValue);
    
    iRet = CountBit(iValue);
    printf("Total ON bits are : %d\n",iRet);
    return 0;
}





































