
////////////////////////////////////////////////////////
//Function Name:Maximum
//Input:8225 665 3 76 953 858 
//Output:8225
//Description:Accept N numbers from user and return the largest number.
//Date:11/08/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<stdio.h> 
#define TRUE 1 
#define FALSE 0 
typedef int BOOL; 
int Maximum(int Arr[], int iLength) 
{ 
 int i=0,iMax=0;
 Arr[0]=iMax;
 for(i=0;i<iLength;i++)
 {
 	if(Arr[i]>=iMax)
 	{
 		iMax=Arr[i];
 	}
 }
 return iMax;
} 


int main() 
{ 
 int iSize = 0,iCnt = 0, iValue = 0, iRet = 0; 
 int *p = NULL; 
 printf("Enter number of elements"); 
 scanf("%d",&iSize); 

 p = (int *)malloc(iSize * sizeof(int)); 
 if(p == NULL) 
 { 
 printf("Unable to allocate memory"); 
 return -1; 
 } 
 printf("Enter %d elements ",iSize); 
 for(iCnt = 0;iCnt<iSize; iCnt++) 
 { 

 scanf("%d",&p[iCnt]); 
 } 


 iRet = Maximum(p, iSize); 
 
 printf("Largest Number is %d",iRet); 
 
 free(p); 
 return 0; 
}