////////////////////////////////////////////////////////
//Function Name:main
//Input:3
//Output:0 1 1
//Description:Fibonacci Series
//Date: 28/04/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////


#include<stdio.h>

int main()
{
	int a=0,b=1,c=0,count=2,n=0;

    printf("Enter a Number\n");
    scanf("%d",&n);

    printf("Fibonacci Series is: %d\t%d\t",a,b);
    //scanf("%d%d\t",&a,&b);

    while(count<n)
    {
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
        count++;
    }
     
   return 0;
}