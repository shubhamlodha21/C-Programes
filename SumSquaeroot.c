////////////////////////////////////////////////////////
//Function Name:main
//Input:3
//Output:1.6
//Description:Sum  of series 1+1\1+1\2+1
//Date: 28/04/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////




#include<stdio.h>
int main()
{
	int n,x=1;
	float Sum=0,i=1;

    printf("Enter Number\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
    	Sum=Sum+1/i;
    }

    printf("Sum  of series is:%f\n",Sum);

    return 0;
}