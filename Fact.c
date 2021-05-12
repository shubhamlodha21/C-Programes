////////////////////////////////////////////////////////
//Function Name:Fact
//Input:5
//Output:120
//Description: Accept number from user and return its factorial
//Date: 13/05/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

# include<stdio.h>
int Fact(int iNo)
{
    int iCnt = 0, iMult = 1;
    if(iNo < 0)
    {   iNo = -iNo; }
    for(iCnt = 1 ; iCnt <= iNo; iCnt++)
    {
        iMult = iMult * iCnt;  
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    iRet = Fact(iValue);
    printf("Result is : %d\n",iRet);
    return 0;
}
