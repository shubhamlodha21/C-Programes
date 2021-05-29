////////////////////////////////////////////////////////
//Function Name:StringC
//Input:Shubham
//Output:SHUBHAM
//Description:Converts Whole String into Captial String
//Date: 29/05/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////


#include<stdio.h>

void strcpyXX(char src[], char dest[])
{
    if(src == NULL || dest == NULL)
    {
        return;
    }
    while(*src != '\0')
    {
        if((*src >= 'a') && (*src <= 'z'))
        {
            *dest = *src -32;
        }
        else
        {
            *dest = *src;
        }
        src++;
        dest++;
    }
    *dest = '\0';
}
int main()
{
    char arr[20];
    char brr[20];
    
    printf("Enter string\n");
    scanf("%[^'\n']s",arr);
    
    strcpyXX(arr,brr);   
    printf("Original string is : %s\n",arr);
    printf("After copy strinng is : %s\n",brr);
    
    return 0;
}
