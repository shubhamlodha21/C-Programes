 ////////////////////////////////////////////////////////
//Function Name:Factors
//Input:6
//Output:1   2   3   4   6
//Description: Accept number and display factors of that number
//Date: 13/05/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

# include<stdio.h>
void Factors(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {iNo = -iNo;}
    
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    Factors(iValue);
    
    return 0;
}
