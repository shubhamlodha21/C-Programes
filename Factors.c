////////////////////////////////////////////////////////
//Function Name:Factors
//Input:6
//Output:1    2    3
//Description: Accept number from user and Find its factors.
//Date: 17/05/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<stdio.h>

void Factors(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {iNo = -iNo;}
  
    for(iCnt = iNo/2; iCnt >=1; iCnt--)
    {
        if((iNo % iCnt) == 0)       
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue1 = 0, iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue1);
    Factors(iValue1);
    
    return 0;
}
