////////////////////////////////////////////////////////
//Function Name:main
//Input:2
//Output:6 28
//Description:Accept a Number From User and Display Perfect number upto That Number
//Date: 29/04/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////


#include<stdio.h>

int main()
{
	int iNo=0,iSum=0,iNum=1;
    int i=0,iCnt=0;

	printf("Enter Number Yo Want To print\n");
	scanf("%d",&iNo);

    printf("Pefect Numbers Are:\n");
    while(iCnt<iNo)
    {
      for(i=1;i<iNum;i++)
    {
        if(iNum%i==0)
        {    
        iSum=iSum+i;
        }
    }
   if(iNum==iSum)
    {
        printf("%d\t",iNum);
        iCnt++;
    }
    iNum++;
    iSum=0;
    }     
}