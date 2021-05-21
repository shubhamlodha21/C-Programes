////////////////////////////////////////////////////////
//Function Name:Pattern
//Input:Row = 4
//  Column = 4
//Output:
/* 
            A
 
            B        B
 
            C        C        C
            
            D        D        D       D
 */
//Description:Print the Pattern
//Date: 21/05/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////
#include<stdio.h>
void Pattern(unsigned int iRow, unsigned int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';
    if(iRow != iCol)
    {return;}
    
    for(i = 1,ch = 'A'; i<= iRow; i++,ch++)
    {
        for(j = 1; j<= iCol; j++)
        {
            if(i >= j)
            {
                printf("%c\t",ch);
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







