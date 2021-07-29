////////////////////////////////////////////////////////
//Function Name:Pattern
//Input:5  (1   2   3   4   5)
//Output:
/*48

20      28

8       12      16

3       5       7       9

1       2       3       4       5*/
//Description:Print the Pattern
//Date: 29/07/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Pattern(int Arr[],int iNo)
{
    if(iNo<1)
    {
        return;
    }
    int a=0;
    int i=0;
    int temp[iNo-1];
    for(i=0;i<iNo;i++)
    {
            a=Arr[i]+Arr[i+1];
            temp[i]=a;
    }
    Pattern(temp,iNo-1);
    {
        for(i=0;i<iNo;i++)
        {
            printf("%d\t",Arr[i]);
            if(i==iNo-1)
            {
                printf("\n");
            }
        }
    }
        printf("\n");
}

int main()
{
    int iNo=0,i=0;
    int arr[10];

    printf("Enter Number of Elements you want:");
    scanf("%d",&iNo);

    for(i=0;i<iNo;i++)
    {
        printf("Enter %d Element",i+1);
        scanf("%d",&arr[i]);
    }

    Pattern(arr,iNo);

}