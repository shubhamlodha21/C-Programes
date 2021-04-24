////////////////////////////////////////////////////////
//Function Name:Multiplication And String Operation
//Input:Integer
//Output:Integer
//Description: Simple Program to Perform Multiplication And String.
//Date: 24/04/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////



#include<stdio.h>

int main()
{
    int i;
    char str[20];

    printf("Enter a Number:\n");
    scanf("%d",&i);

    printf("Enter a String:\n");
    scanf("%s",&str);

    printf("Output Number is:%d\n",i*2);

    printf("Output String is:%s\n",str);

    return 0;
}