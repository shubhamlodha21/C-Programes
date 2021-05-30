////////////////////////////////////////////////////////
//Function Name:TOggelBit
//Input:1010
//Output:0101
//Description:Toggel the bit
//Date: 30/05/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<stdio.h>
unsigned int ToggleBit(unsigned int iNo)   
    
{
    unsigned int iMask = 0X00000001;
    unsigned int Result = 0;
    
    Result = iNo ^ iMask;
    
    return Result;
}

int main()
{
    unsigned int iValue = 0;
    unsigned int iRet = 0;
    printf("Enter number\n");
    scanf("%u",&iValue);
    
    iRet = ToggleBit(iValue);
    
    printf("Number after updation : %d\n",iRet);
    return 0;
}





































