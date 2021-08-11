  
////////////////////////////////////////////////////////
//Function Name:DigitsSum
//Input:8225 665 3 76 953 858 
//Output:17 17 3 13 17 21
//Description:Accept N numbers from user and display summation of digits of each number
//Date:11/08/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////


#include<stdio.h> 
#include <stdlib.h> 
void DigitsSum(int Arr[], int iLength) 
{ 
 int i=0,iDigit=0,iAdd=0;
 iAdd=Arr[0];

 if(Arr==NULL)
 {
 	return;
 }

 for(i=0;i<iLength;i++)
 {
 	iAdd=0;
 while(Arr[i]>0)
 {
 	iDigit=Arr[i]%10;
 	iAdd=iAdd+iDigit;
 	Arr[i]=Arr[i]/10;

 }
 printf("%d\t",iAdd);
}
}
int main() 
{ 
 int iSize = 0,iCnt = 0;
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

 DigitsSum(p, iSize); 
 
 free(p); 
 return 0; 
}