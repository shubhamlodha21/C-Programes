////////////////////////////////////////////////////////
//Function Name: Used of Sizeof Operator
//Input:Integer
//Output:Integer
//Description: Used of sizeof operator in DS
//Date: 24/04/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

struct node
{ 
    int Data;
    struct node *Next;
}obj;

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

int main()
{
	printf("%d",sizeof(NODE));
	printf("%d",sizeof(PNODE));
	printf("%d",sizeof(PPNODE));

	return 0;
}