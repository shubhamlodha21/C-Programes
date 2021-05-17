///////////////////////////////////////////////////////////////////
//Function Name:Frequency2
//Input:8294521
//Output:1
//Description: Accept number from user and Find Frequncy of number 5.
//Date: 17/05/2021
//Author: Shubham Lodha
//////////////////////////////////////////////////////////////////

#include<stdio.h>

int Frequency2(int iNo)
{
    int iCnt =0,iDigit = 0;
    if(iNo < 0)
    {iNo = -iNo;}
    
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 5)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue1 = 0, iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue1);
    iRet = Frequency(iValue1);
    
    printf("Frequency of 5 is : %d\n",iRet);
    
        return 0;
}
