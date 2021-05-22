////////////////////////////////////////////////////////
//Function Name:CountEven
//Input:22 55 10 7  6
//Output:3
//Description:Accept Number in Array and count Even Numbers in that
//Date: 22/05/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int EvenCount(int Arr[], int iLength)
{
    int iCnt = 0, i = 0;
    
    for(i = 0; i< iLength; i++)
    {
        if((Arr[i] % 2) == 0)
        {
            iCnt++;
        }
    }
    return iCnt;
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
    iRet = EvenCount(arr,iSize);
    printf("Even elements are : %d\n",iRet);
    free(arr);
    return 0;
}
