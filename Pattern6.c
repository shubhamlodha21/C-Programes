//////////////////////////////////////////////////////
//Function Name:pattern
//Input:5 A
//Output: A  A  A  A  A 
//Description:print the pattern
//Date: 19/05/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////


#include<stdio.h>
void Pattern(unsigned int iNo,char ch)
{
    int iCnt = 0;
    printf("\n");
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t",ch);
    }
    printf("\n");
}

int main()
{
    unsigned int iValue = 0;
    char cValue = '\0';
    
    printf("Enter number\n");
    scanf("%u",&iValue);
    printf("Enter character\n");
    scanf(" %c",&cValue);
    
    Pattern(iValue,cValue);
    return 0;
}

