////////////////////////////////////////////////////////
//Function Name:ChkChar
//Input:MArvellous (e)
//Output:Character is present
//Description:Check whether that character is present in string or not.
//Date: 19/08/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1 
#define FALSE 0 
typedef int BOOL;
BOOL ChkChar(char *str, char ch) 
{ 
	int iCnt=0;
   while(*str!='\0')
   {

   	if(*str==ch)
   	{
   		iCnt=1;
   		break;
   	}
   	str++;
   }
  return iCnt;
   }

int main() 
{ 
 char arr[20]; 
 char cValue='\0'; 
 BOOL bRet = FALSE;

 printf("Enter string:"); 
 scanf("%[^'\n']s",arr); 

 printf("Enter the character:"); 
 scanf(" %c",&cValue); 

 bRet = ChkChar(arr, cValue); 
 if(bRet == TRUE) 
 { 
 printf("Character found"); 
 } 
 else 
 { 
 printf("Character not found"); 
 } 
 return 0; 
} 