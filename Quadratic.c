///////////////////////////////////////////////////////
//Function Name:main
//Input: 1 4 3
//Output:Roots Are real and unequal
//Description: Solve Quadratic Equation and return its nature
//Date: 26/04/2021
//Author: Shubham Lodha
/////////////////////////////////////////////////////////

#include<stdio.h>
#include<math.h>

int main()
{
   int d,b,a,c;
   float r1,r2;

   printf("Enter the values of Coeffients of a,b,c:\n");
   scanf("%d%d%d",&a,&b,&c);

   d=b*b-4*a*c;

   if(d>0)
   {
   	r1=(-b+sqrt(d))/(2*a);
   	r2=(-b-sqrt(d))/(2*a);
   	printf("Roots are Real And Unequals\n");
   	printf("Roots are:%f %f",r1,r2);
   }
   else if(d==0)
   {
   	r1=-b/2*a;
   	printf("Roots Are Real And equals\n");
   	printf("Roots Are:%d",r1);
   }
   else
   {
     printf("Roots Are Imagnary\n");
   }
}

