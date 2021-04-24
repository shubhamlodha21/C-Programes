////////////////////////////////////////////////////////
//Function Name:continue used
//Input:Integer
//Output:3    3
//Description:Simple Programe for Continue Statement
//Date: 25/04/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////



#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j;

	for(i=0;i<3;i++)
     	for(j=1;j<4;j++)
	{
      if(j==2)
      	continue;
      printf("%d%d\n",i,j);
	}
}
