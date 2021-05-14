////////////////////////////////////////////////////////
//Function Name:CheckEvenDigits
//Input:45210
//Output:3
//Description:Accept number from user and Count Even Digits.
//Date: 14/05/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////


#include<stdio.h>
int EvenDigits(int iNo)
{
    int iDigit = 0, iCnt = 0;
    if(iNo < 0)
    {iNo = -iNo;}
    if(iNo == 0)
    {
        return 1;
    }
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}
int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    iRet = EvenDigits(iValue);
    printf("Number of even digits are : %d\n",iRet);
    
    return 0;
}

