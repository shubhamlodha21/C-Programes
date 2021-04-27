////////////////////////////////////////////////////////
//Function Name:Swap
//Input:10 20 
//Output:20 10
//Description:Swapping two numbers without using 3rd Variables.
//Date: 27/04/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////
 
#include<stdio.h>
void swap(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;

    printf("Values After Swapping %d%d",a,b);
}

int main()
{
	int x,y;
    printf("Values Before Swapping\n");
    scanf("%d%d",&x,&y);

    swap(x,y);
    
    return 0;
}