////////////////////////////////////////////////////////
//Function Name:main
//Input:153
//Output:Given number is Armstrong
//Description:Check Whether Given Number is Armstrong or Not 
//Date: 28/04/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////



#include<stdio.h>

int main()
{
	int iNo=0,iSum=0,temp;
    int i=0,iDigit=0;

	printf("Enter Number\n");
	scanf("%d",&iNo);

    temp=iNo;

    while(temp!=0)
    {
        iDigit=temp%10;

        iSum=iSum+iDigit*iDigit*iDigit;

        temp=temp/10;
     
    }
    if(iNo==iSum)
    {
        printf("%d Number is Armstrong\n",iNo);
    }
    else
    {
        printf("%d Number is Not Armstrong\n",iNo);
    }
}