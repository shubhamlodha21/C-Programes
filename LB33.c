
////////////////////////////////////////////////////////////////////////////
//
// Function Name :  LB33
// Description   :  Accept Number From User And Display Even Factors Of That Numbers
// Input         :  20
// Output        :  2  4 10 20
// Author        :  Shubham Lodha
// Date          :  22/06/2021
//
////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

void DisplayFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i < iNo; i++)
    {
        if (iNo % i == 0)
        {
            if(i % 2 == 0)
            {
                printf("%d ", i);
            }
        }
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter Number : ");
    scanf("%d", &iValue);
    
    DisplayFactor(iValue);
    
    return 0;
}