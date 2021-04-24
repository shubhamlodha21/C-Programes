////////////////////////////////////////////////////////
//Function Name:Maximum-Minimum of 'n' number
//Input:Integer
//Output:Integer
//Description:Accept n Numbers from user and display Max And Min Number
//Date: 24/04/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////



#include<stdio.h>
#include<stdlib.h>
void MaxMin(int Brr[],int iValue)
{
	int i=0,iMax,iMin;
	iMax=iMin=Brr[0];

	for(i=0;i<iValue;i++)
	{
		if(Brr[i]<iMin)
		{
			iMin=Brr[i];
		}
	}
	for(i=0;i<iValue;i++)
	{

		if(Brr[i]>iMax)
		{
			iMax=Brr[i];
		}
	}
	printf("Maximum Value is:%d",iMax);
    printf("Minimum Value is:%d",iMin);
	
}

int main()
{
	int *Arr=NULL;
	int no,i;

	printf("Enter Number of Elements");
	scanf("%d",&no);

	Arr=(int *)malloc(no*sizeof(int));

	printf("Enter Elements One by One:");
	for(i=0;i<no;i++)
	{
		scanf("%d",&Arr[i]);
	}

	MaxMin(Arr,no);

	free(Arr);

	return 0;
}