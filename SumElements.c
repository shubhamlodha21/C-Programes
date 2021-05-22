////////////////////////////////////////////////////////
//Function Name:SumElements
//Input:5 (1 2 3 4 5 )
//Output:Sum is 15
//Description:Sum of all elements of Arrays
//Date: 22/05/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int SumElements(int Arr[], int iLength)
{
    int iSum = 0, i = 0;
    
    for(i = 0; i< iLength; i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;
}
int main()
{
    int *arr = NULL;
    int i = 0, iSize = 0,iRet = 0;
    
    printf("Enter number of elements\n");
    scanf("%d",&iSize);
    
    arr = (int*)malloc(iSize*sizeof(int));
    
    printf("Enter the elements\n");
    for(i = 0; i<iSize; i++)
    {
        scanf("%d",&arr[i]);
    }
    iRet = SumElements(arr,iSize);
    printf("Summation of all the elements is : %d\n",iRet);
    free(arr);
    return 0;
}
