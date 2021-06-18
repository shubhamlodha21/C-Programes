///////////////////////////////////////////////////////
//Function Name:OddNumbers
//Input:3 (10  11    71)
//Output:11 71
//Description:Accept n Numbers from user and return Odd Numbers
//Date: 18/06/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

void OddNumbers(int Arr[],int iLength)
{
	int i=0;
	for(i=0;i<iLength;i++)
	
		if((Arr[i]%2)!=0)
		{
		printf("Odd Numbers Are as:%d\n",Arr[i]);
	    }
}

 int main()

{
	int iSize=0;
	int i;
	int *arr=NULL;

	printf("Enter Number:");
	scanf("%d",&iSize);

	arr=(int *)malloc(iSize*sizeof(int));

	printf("Enters %d Elements",iSize);
	for(i=0;i<iSize;i++)
	{
		scanf("%d",&arr[i]);
	}

    OddNumbers(arr,iSize);

    free(arr);
	return 0;
}
