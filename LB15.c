////////////////////////////////////////////////////////
//Function Name:Accept
//Input:2
//Output: *  *
//Description:Program to Display *
//Date: 30/04/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////
#include<stdio.h>
void Accept(int iNo)
{
 int iCnt = 0;
 for( iCnt=0;iCnt<=iNo;iCnt++)
 {
 printf("*\n");
 }
}
int main()
{
 int iValue = 0;
printf("Enter The Value");
scanf("%d",&iValue);
 Accept(iValue);
 return 0;
}