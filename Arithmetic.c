////////////////////////////////////////////////////////
//Function Name:Arithmetic
//Input:Integer
//Output:Integer
//Description:Calculate Mean,Mode And Mediains
//Date: 25/04/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////


#include<stdio.h>
#include<math.h>
#include<stdlib.h>


void Arithmetic(int Arr[],int iValue)
{
	int i=0,Mean,Var,Sd,Sum=0;

	for(i=0;i<iValue;i++)
	{
      Sum=Sum+Arr[i];
	}
    for(i=0;i<iValue;i++)
    {
	Mean=Sum/iValue;

	Var=(Sum+(Arr[i]-Mean)*(Arr[i]-Mean))/iValue;

	Sd=sqrt(Var);
    }

printf("Mean is:%d",Mean);9
printf("Variance is:%d",Var);
printf("Standard deviation is:%d",Sd);
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

	Arithmetic(Arr,no);

	free(Arr);

	return 0;
}