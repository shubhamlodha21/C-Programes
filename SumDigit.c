
////////////////////////////////////////////////////////
//Function Name:main
//Input:106 
//Output:7
//Description:Sum of Digit of Given Number
//Date: 27/04/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////
 #include<stdio.h>

int main()
{
	int iNo,iDigit,iSum=0;

	printf("Enter a Number:\n");
	scanf("%d",&iNo);
   
    while(iNo>0)
    {  
    iDigit=iNo%10;
    iSum=iSum+iDigit;
    iNo=iNo/10;
    }

    printf("Sum of Digit is %d\n",iSum);
    return 0;
}