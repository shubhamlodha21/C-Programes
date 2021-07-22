////////////////////////////////////////////////////////
//Function Name:MultiplePointer
//Input:--

//Output:12
//6422300
//6422296
//12
//6422300
//6422300
//6422296
//6422292


//Description:Used  of pointer to Pointer
//Date: 22/07/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////



#include<stdio.h>
int main()
{
	int val=12;
	int *iptr=&val;
	int **pptr=&iptr;

	printf("%d\n",val);
	printf("%d\n",iptr);
	printf("%d\n",pptr);
	//printf("%d\n",*val);
	printf("%d\n",*iptr);
	printf("%d\n",*pptr);
	printf("%d\n",&val);
	printf("%d\n",&iptr);
	printf("%d\n",&pptr);

}