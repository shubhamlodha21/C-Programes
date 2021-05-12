////////////////////////////////////////////////////////
//Function Name:FactorsSum
//Input:12
//Output:16
//Description:Accept number and return the addition of its factors
//Date: 13/05/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

# include<stdio.h>
int FactorsSum(int iNo)
{
    int iCnt = 0, iSum = 0;
    if(iNo < 0)
    {iNo = -iNo;}
    
    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    iRet = FactorsSum(iValue);
    printf("Summation is : %d\n",iRet);
    return 0;
}
