//Description:  Enter a number from user and write it in words
// Date : 27/09/2021
// Author: Shubham Lodha

#include<stdio.h>

void Display(int iNo)
{
    int iDigit=0,iRev=0,iDigit1=0;
    while(iNo>0)
    {  
    iDigit=iNo%10;

    iNo=iNo/10;

    iRev=(iRev*10)+iDigit;
    }

    while(iRev!=0)
    {
    iDigit1=iRev%10;
    switch(iDigit1)
    {
        case 1: printf("one-");
                break;
        
        case 2: printf("two-");
                break;

        case 3: printf("three-");
                break;

        case 4: printf("four-");
                break;

        case 5: printf("five-");
                break;

        case 6: printf("six-");
                break;

        case 7:printf("seven-");
                break;

        case 8:printf("eight-");
                break;

        case 9:printf("nine-");
                break;

        case 0:printf("zero-");
                break;
    }
    iRev=iRev/10;
    }
}


int main()
{
    int iNo=0;

    printf("Enter a Number:");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;

}