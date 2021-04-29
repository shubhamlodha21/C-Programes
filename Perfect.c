////////////////////////////////////////////////////////
//Function Name:main
//Input:6(1+2+3+=6)
//Output:Given Number is Perfect Number
//Description:Check Whether given Number is Perfect or not
//Date: 29/04/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////



#include<stdio.h>

int main()
{
	int iNo=0,iSum=0;
    int i=0;

	printf("Enter A Number\n");
	scanf("%d",&iNo);

   for(i=1;i<iNo;i++)
    {
        if(iNo%i==0)
        {    
        iSum=iSum+i;
        }
    }
   if(iSum==iNo)
    {
        printf("%d Number is Perfect Number\n",iNo);
    }
    else
    {
        printf("%d Number is Not Perfect Number",iNo);
    }
}