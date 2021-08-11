
////////////////////////////////////////////////////////
//Function Name:Difference
//Input:8225 665 3 76 953 858 
//Output:8222
//Description:Accept N numbers from user and return the difference between largest and smallest number.
//Date:11/08/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////


#include<stdio.h> 
#include <stdlib.h>
typedef int BOOL; 
int Difference(int Arr[], int iLength) 
{ 
 BOOL i=0,iMax=0,iMin=0,iAns=0;
 {
 iMax=Arr[0];
 for(i=0;i<iLength;i++)
 	if(Arr[i]>=iMax)
 	{
 		iMax=Arr[i];
 	}
 
 	iMin=Arr[0];
 	for(i=0;i<iLength;i++)
 	if(Arr[i]<=iMin)
 	{
 		iMin=Arr[i];
 	}
 }
 
  iAns=iMax-iMin;
  return iAns;
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

 iRet =Difference(p, iSize); 
 
 printf("Largest Number and Smallest Number Difference  is %d",iRet); 
 
 free(p); 
 return 0; 
}