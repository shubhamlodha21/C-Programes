////////////////////////////////////////////////////////
//Function Name:main
//Input:4
/*Output:1
         2 3
         4 5 6
         7 8 9 10*/
//Description:Pattern Printing
//Date: 29/04/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

int main()
{
	int i=1,j=1,n,r=1;

	printf("Enter the number of Rows\n");
	scanf("%d",&n);
     
     while(r<=n)
    {
     for(j=1;j<=r;j++)
     {
     	printf("%d\t",i++);
     }
	printf("\n");
     r++;
 }
}