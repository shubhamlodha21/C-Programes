
////////////////////////////////////////////////////////////////////////////
//
//  Function name : CheckEven
//  Input : Integer
//  Output : Boolean (True / False)
//  Description : It is used to check whetheer number is even or odd
//  Date : 01/03/2021
//  Author : Shubham Lodha
//
////////////////////////////////////////////////////////////////////////////
# include<stdio.h>
#include<stdbool.h>
bool CheckEven(int iNo)
{
    if((iNo % 2) == 0)
    {   return true;    }
    else
    {   return false;   }
}
int main()
{
    int iValue = 0;
    bool bRet = false;
    printf("Enter number");
    scanf("%d",&iValue);
    
    bRet = CheckEven(iValue);   // CheckEven(12)
    if(bRet == true)
    {
        printf("%d is even number\n",iValue);
    }
    else
    {
        printf("%d is odd number\n",iValue);
    }
    return 0;
}






