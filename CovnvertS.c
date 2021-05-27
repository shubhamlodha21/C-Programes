////////////////////////////////////////////////////////
//Function Name:ConvertS
//Input: ABcD@123
//Output: abCd@123
//Description:Covertes a Uppercase into Lowercase and Lowercase into Uppercase String
//Date: 27/05/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////


#include<stdio.h>
void strtoggleX(char str[])
{
    if(str == NULL)
    {return;}
    
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
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
    strtoggleX(Arr);   // struprX(100);
    printf("Updated string is: %s\n",Arr);
    return 0;
}
