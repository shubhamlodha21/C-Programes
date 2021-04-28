////////////////////////////////////////////////////////
//Function Name:main
//Input:3
//Output:14
//Description:Sum  of series 1sqr+2sqr+3sqr
//Date: 28/04/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////


#include<stdio.h>
int main()
{
	int i,n;
	float Sum;

    printf("Enter Number\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
    	Sum=Sum+i*i;
    }

    printf("Sum of Square of series is:%f\n",Sum);

    return 0;
}