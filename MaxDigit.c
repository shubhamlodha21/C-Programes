////////////////////////////////////////////////////////
//Function Name:MaxDigit
//Input:7505
//Output:7
//Description: Accept number from user and return the largest digit
//Date: 15/05/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////


#include<stdio.h>

int MaxDigit(int iNo)
{
    int iDigit = 0, iMax = 0;
    if(iNo < 0)
    {iNo = -iNo;}
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit > iMax)
        {
            iMax = iDigit;
        }
        iNo = iNo / 10;
    }
    return iMax;
}

int main()
{
    int iValue = 0,iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    iRet = MaxDigit(iValue);
        
    printf("Largest digit : %d\n",iRet);
    
        return 0;
}



