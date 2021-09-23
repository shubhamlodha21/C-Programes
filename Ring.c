//Description: Find Area and Perimeter of Ring
//Date: 23/09/2021
//Author : Shubham Lodha

#include<stdio.h>
#define Pi 3.14

void Ring(int a,int b)
{
    int ans=0;

    ans=Pi*(a*a-b*b);
    printf("Area of Ring is %d\n",ans);

    ans=2*Pi*(a+b);
    printf("Perimeter of Ring is %d\n",ans);
}

int main()
{
    int a=0,b=0;

    printf("Enter inner Radius of ring:");
    scanf("%d",&a);

    printf("Enter outer Radius of ring:");
    scanf("%d",&b);

    Ring(a,b);

    return 0;
}