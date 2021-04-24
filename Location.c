////////////////////////////////////////////////////////
//Function Name:Location used
//Input:30
//Output:At 3 Position
//Description:To Find Perticular Numbers Location
//Date: 25/04/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////



#include<stdio.h>
#include<math.h>
#include<stdlib.h>


void Location(int Arr[],int iValue,int iNo2)
{
    int i=0;
	for(i=0;i<iValue;i++)
	{
	if(Arr[i]==iNo2)
	{
		printf("%d Number Found at %d Position",iNo2,i+1);
		break;
	}
    }
}

    
int main()
{
	int *Arr=NULL;
	int no,i,iNo2;

	printf("Enter Number of Elements");
	scanf("%d",&no);

	Arr=(int *)malloc(no*sizeof(int));

	printf("Enter Elements One by One:");
	for(i=0;i<no;i++)
	{
		scanf("%d",&Arr[i]);
	}

	printf("Enter Number Whos Position You Want:");
	scanf("%d",&iNo2);

	Location(Arr,no,iNo2);

	free(Arr);

	return 0;
}