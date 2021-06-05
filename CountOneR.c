///////////////////////////////////////////////////////
//Function Name:CountOneR
//Input:1010
//Output:2
//Description:Count the Numbers of ON Bits by using Recursion
//Date: 05/06/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////
 


#include<stdio.h>
#include<stdlib.h>

int CountOneI(int iNo)
{
    int iMask = 1;
    int i = 0, iCnt = 0;
    
    while(i< 32)
    {
        if((iNo & iMask) == iMask)
        {
            iCnt++;
        }
        i++;
        iMask = iMask << 1;
    }
    return iCnt;
}

int CountOneR(int iNo)
{
    static int iMask = 1;
    static int i = 0, iCnt = 0;
    
    if(i< 32)
    {
        if((iNo & iMask) == iMask)
        {
            iCnt++;
        }
        i++;
        iMask = iMask << 1;
        CountOneR(iNo);
    }
    return iCnt;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);
    iRet = CountOneR(iValue);
    
    printf("Number of 1's are : %d\n",iRet);
    return 0;
}
