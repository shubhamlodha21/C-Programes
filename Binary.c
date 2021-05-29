////////////////////////////////////////////////////////
//Function Name:DisplayBinary
//Input:10
//Output:1010
//Description:Accept Number from user and display its binary value
//Date: 29/05/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<stdio.h>

void DisplayBinary(unsigned int iNo)
{
    unsigned int iDigit = 0;
    while(iNo > 0)
    {
        iDigit = iNo % 2;
        printf("%u\t",iDigit);
        iNo = iNo / 2;
    }
}

int main()
{
    unsigned int iValue = 0;
    
    printf("Enter number\n");
    scanf("%u",&iValue);
    
    DisplayBinary(iValue);
    
    return 0;
}






















