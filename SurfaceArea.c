//Description: Find Surface_Area and Volume of Cylinder
//Date: 23/09/2021
//Author : Shubham Lodha

#include<stdio.h>
#define Pi 3.14


void Cyclinder(int h,int r)
{
    int ans=0;

    ans=(2*Pi*r*r)+(2*r*h*Pi);
    printf("Surface Area of Cyclinder is %d/n",ans);

    ans=Pi*r*r*h;
    printf("Volume of Cyclinder is %d/n",ans);

}
int main()
{
    int h=0,r=0;

    printf("Enter Height of Cylinder:");
    scanf("%d",&h);

    printf("Enter Radius of Cylinder:");
    scanf("%d",&r);

    Cyclinder(h,r);

    return 0;
}