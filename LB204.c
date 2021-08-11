  
////////////////////////////////////////////////////////
//Function Name:Digits
//Input:8225 665 3 76 953 858 
//Output:665 953 858
//Description:Accept N numbers from user and display all such numbers which contains 3 digits in it
//Date:11/08/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<stdio.h> 
void Digits(int Arr[], int iLength) 
{ 
   int i=0;
   for(i=0;i<iLength;i++)
   {
   	  if((Arr[i]>=100)&&(Arr[i]<=999))
   	  	
   	{ 
   		printf("%d",Arr[i]);
   	}
   }
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
 Digits(p,iSize); 
 
 free(p); 
 return 0; 
}