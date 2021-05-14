////////////////////////////////////////////////////////
//Function Name:DisplayDigits
//Input:7521
/*Output:1 
         2 
         5 
         7*/
//Description:Accept number from user and display the digits of that numbers separately in reverse order.
//Date: 14/05/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<stdio.h>
void DisplayDigits(int iNo)
{
    int iDigit = 0;
    if(iNo < 0)
    {iNo = -iNo;}
    
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    DisplayDigits(iValue);
    
    return 0;
}

