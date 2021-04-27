////////////////////////////////////////////////////////
//Function Name:main
//Input:121 
//Output:Number is Palindrom
//Description:Check Whether given Number is palindrom or not
//Date: 27/04/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////
 
#include<stdio.h>
int main()
{
	int iNo,iDigit=0,iRev=0;
    int temp;
	printf("Enter A Number\n");
	scanf("%d",&iNo);

    temp=iNo;
    while(temp!=0)
    {  
    iDigit=temp%10;

    temp=temp/10;

    iRev=(iRev*10)+iDigit;
    }
    if(iNo==iRev)
    {   
        printf("%d Number is palindrome\n",iNo);
    }
    else
    {
          printf("%d is Not palindrome\n",iNo);
    }
}