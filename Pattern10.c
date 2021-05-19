////////////////////////////////////////////////////////
//Function Name:Pattern
//Input:Row = 3
//  Column = 3
//Output:
/* 
   1   2   3
    *   *   *
    1   2   3  
 */
//Description:Print the Pattern
//Date: 19/05/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////


#include<stdio.h>
void Pattern(unsigned int iRow, unsigned int iCol)
{
    int i = 0, j = 0;
    if(iRow != iCol)
    {
        return;
    }
    
    for(i = 1; i<= iRow; i++)
    {
        for(j = 1; j<= iCol; j++)
        {
            if(i >= j)
            {
                printf("%d\t",j);
            }
            else
            {
                printf("$\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    unsigned int iValue1 = 0, iValue2 = 0;
    
    printf("Enter number of rows\n");
    scanf("%u",&iValue1);
    printf("Enter number of columns\n");
    scanf("%u",&iValue2);
    
    Pattern(iValue1,iValue2);
    return 0;
}
