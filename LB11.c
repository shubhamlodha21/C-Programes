////////////////////////////////////////////////////////
//Function Name:Divide
//Input:10 5
//Output:2
//Description:Program to Divide two Numbers
//Date: 30/04/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<stdio.h>

int Divide(int iNo1, int iNo2)
{
 int iAns = 0;
 if(iNo2 ==0)
 {
 return -1;
 }
 iAns = iNo1 / iNo2;
 return iAns;
}

int main()
{
 int iValue1 = 15, iValue2 = 5;
 int iRet = 0;
 iRet = Divide(iValue1, iValue2);
 printf("Division is %d", iRet);
 return 0;
}