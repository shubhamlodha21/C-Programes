/////////////////////////////////////////////////////
//Function Name:ThreadPriority
//Input:4
//Output:10 (1 +  2 +  3 +  4)
//Description:Accept number from user and return the addition of all numbers till that number
//Date: 12/05/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include <stdio.h>

int Sum(int iNo)   // 5
{
    int iCnt = 0, iSum = 0;
    if(iNo == 0)
    {
        return 0;
    }
    if(iNo < 0 )
    {
        iNo = -iNo;
    }
    //      1               2               3
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iSum = iSum + iCnt;     // 4
    }
    return iSum;
}
int main()  // Entry point function
{
    int iNo = 0;
    int iRet = 0;
    
    printf("Enter the number\n");
    scanf("%d",&iNo);
    iRet = Sum(iNo);
    
    printf("Addtion is : %d\n",iRet);
  
    return 0;
}







