///////////////////////////////////////////////////////
//Function Name:NumberLine
//Input:4
//Output:-4   -3  -2  -1  0   1   2   3   4
//Description:print the range of whole Number from negative to positive
//Date: 18/05/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////
#include<stdio.h>
void NumberLine(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    printf("\n");
    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue1 = 0, iRet = 0;
    printf("Enter number\n");
    scanf("%d",&iValue1);
    NumberLine(iValue1);
    
    return 0;
}
