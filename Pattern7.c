//////////////////////////////////////////////////////
//Function Name:pattern
// Input :  4   3
// Output :
/*
 
    *   *   *
    *   *   *
    *   *   *
 
 */
//Description:print the pattern
//Date: 19/05/2021
//Author: Shubham Lodha
/////////////////////////////////////////////////////////////////////////////////////////////////////////////




#include<stdio.h>
void Pattern(unsigned int iRow, unsigned int iCol)
{
    int i = 0, j = 0;
    printf("\n");
 
    for(i = 1; i<= iRow; i++)           
    {
        for(j = 1; j<= iCol; j++)       
        {
            printf("*\t");     
        }
        printf("\n");
    }
}
int main()
{
    unsigned int iValue1 = 0, iValue2 = 0;
    char cValue = '\0';
    
    printf("Enter number of rows\n");
    scanf("%u",&iValue1);
    printf("Enter number of columns\n");
    scanf("%u",&iValue2);
    
    Pattern(iValue1,iValue2);
    return 0;
}

