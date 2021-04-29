////////////////////////////////////////////////////////
//Function Name:main
//Input:5
//Output:Sum is 35
//Description:Enter Number From User and SumSeries 1+(1+2)+(1+2+3)...Upto n
//Date: 29/04/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////


#include<stdio.h>
int main()
{
    int i=1,j,n,Sum=0;

    printf("Enter The Number Upto Which Sum Needs\n");
    scanf("%d",&n);

    while(i<=n)
    {
    	j=1;
    	while(j<=i)
    	{
    		Sum=Sum+j;
    		j++;
    	}
    	i++;
    }

    printf("Sum of Number of Series From 1 to %d is: %d",n,Sum);

    return 0;

}