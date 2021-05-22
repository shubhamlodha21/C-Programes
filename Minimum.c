////////////////////////////////////////////////////////
//Function Name:Minimum
//Input: (12 28 32 49 50 )
//Output:12
//Description:Accept n Numbers from user and return ther minimum number in that
//Date: 22/05/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iLength)
{
    int i = 0, iMin = 0;
    if(Arr == NULL)
    {
        return -1;
    }
    iMin = Arr[0];
    for(i = 0; i < iLength ;i++)
    {
        if(Arr[i] < iMin)
        {
            iMin = Arr[i];
        }
    }
    return iMin;
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

    iRet = Minimum(arr,iSize);
    printf("Smallest number is: %d\n",iRet);
    
    free(arr);
    return 0;
}
