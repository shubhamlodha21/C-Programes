////////////////////////////////////////////////////////
//Function Name:CountChar
//Input:MArvellous mullti (l)
//Output:4
//Description:accept string from user and accept one character Return frequency of that character.
//Date: 19/08/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<stdio.h>
int CountChar(char *str, char ch) 
{  
  int iCnt=0;
   while(*str!='\0')
   {
   
     if(*str==ch)
     {
      iCnt++;
     }
     str++;
   }
     return iCnt;
   }


int main() 
{ 
 char arr[20]; 
 char cValue='\0'; 
 int iRet =0;

 printf("Enter string:"); 
 scanf("%[^'\n']s",arr); 

 printf("Enter the character:"); 
 scanf(" %c",&cValue); 

 iRet = CountChar(arr, cValue); 

 printf("Character Frequency is %d",iRet);
 
 return 0; 
} 