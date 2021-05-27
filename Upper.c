////////////////////////////////////////////////////////
//Function Name:UpperC
//Input: ABcd
//Output: abcd
//Description:Covertes a String  Uppercase into Lowercase 
//Date: 27/05/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<stdio.h>

void strlwrX(char str[])
{
    if(str == NULL)
    {return;}
    
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char Arr[10];
    int iRet = 0;
    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);
    strlwrX(Arr);
    printf("Updated string is: %s\n",Arr);
    return 0;
}
