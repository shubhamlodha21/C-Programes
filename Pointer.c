////////////////////////////////////////////////////////
//Function Name:Pointer
//Input:--

//Output:11
//6422300
//6422300
//11
//6422296
//11
//6422300


//Description:Used  of pointer 
//Date: 22/07/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<stdio.h>
int main()
{
	int i=11;
	int *ip=&i;

	printf("%d\n",i);
	printf("%d\n",&i);
	printf("%d\n",ip);
	printf("%d\n",*(ip));
	printf("%d\n",&ip);
	printf("%d\n",*(&i));
	printf("%d\n",*(&ip));
}