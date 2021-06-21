////////////////////////////////////////////////////////
//Function Name:Infornmation
//Input:--
/*Output:
Roll no is 21
Name is Shubham
Attendence is 71
Percentage is 80
*/
//Description:Display Infornmation  of Student
//Date: 21/06/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////


#include<stdio.h>
#include<conio.h>
int main()
{
    int rno;
    char name[20];
    int attd;
    int per;
    printf("enter roll no");
    scanf("%d",&rno);
    printf("enter name of student ");
    scanf("%s",name);
    printf("enter percentage");
    scanf("%d",&per);
    printf("enter attendance");
    scanf("%d",&attd);
    if(attd>80)
    {
    per=per+5;
    }
    else
    {
    per=per-5;
    }
    printf("roll is %d\n",rno);
    printf("name is %s\n",name);
    printf("attendance is %d\n",attd);
    printf("percentage is %d",per);
}