////////////////////////////////////////////////////////
//Function Name:LastChar
//Input:MArvellous mullti (l)
//Output:14
//Description:accept string from user and accept one character. Return index of Last occurrence of that character.
//Date: 19/08/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<stdio.h>
int LastChar(char *str, char ch) 
{ 
 int iCnt=0;
 while(*str!=iCnt)
 {
 	if(*str==ch)
 	{
 		break;
 	}
 	str--;
 	iCnt++;
 }
 if(*str!=ch)
 {
 	return -1;
 }
return iCnt;
 }

int main() 
{ 
 char arr[20]; 
 char cValue; 
 int iRet = 0; 
 
 printf("Enter string"); 
 scanf("%[^'\n']s",arr); 
 printf("Enter the character"); 
 scanf(" %c",&cValue); 
 iRet = LastChar(arr, cValue); 
 printf("Character location is %d",iRet); 
 return 0;
}