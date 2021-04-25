////////////////////////////////////////////////////////
//Function Name:LeapYear
//Input:354
//Output:6666 is Palindrom Number
//Description: Reverse,Add And Check palindrom 
//Date: 26/04/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int iNo,iDigit=0,iRev=0;
    int temp,Add=0;
	printf("Enter A Number:");
	scanf("%d",&iNo);

while(1)
{
    
    temp=iNo;
    iRev=0;
    while(temp!=0)
    {   
        
    iDigit=temp%10;
 

    temp=temp/10;
   

    iRev=(iRev*10)+iDigit;
    
    }
    if(iNo==iRev)
    {   
       printf("%d Number is palindrome at Addition of %d times\n",iNo,Add);
       exit(0);
    }
    else
    {
          printf("   %d\n",iNo);
          printf("+  %d\n",iRev);

          iNo=iNo+iRev;

          printf("--------------------------\n");

          printf("   %d\n",iNo);

          printf("...........................\n");
       
          temp=iNo;

          Add++;
   }
 }
}