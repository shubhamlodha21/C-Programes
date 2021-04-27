////////////////////////////////////////////////////////
//Function Name:main
//Input:1020 
//Output:0201
//Description:Reverse of Given Number
//Date: 27/04/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////
 

#include<stdio.h>

int main()
{
	int iNo,iDigit,iRev=0;

	printf("enter A Number\n");
	scanf("%d",&iNo);
   
    while(iNo>0)
    {  
    iDigit=iNo%10;
  
    iNo=iNo/10;

    iRev=(iRev*10)+iDigit;
    }

    printf("Reverse Number is :%d\n",iRev);
    return 0;
}