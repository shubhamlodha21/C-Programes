////////////////////////////////////////////////////////
//Function Name:DisplayStr
//Input:--
//Output:--
//Description:Accept Number from user and display them
//Date: 23/05/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////
#include<stdio.h>

void Display(char str[])
{
    printf("Charcters from string are\n");
    
    while(*str != '\0')
    {
        printf("%c\n",*str);
        str++;
    }
}

int main()
{
    char Arr[20];
    
    printf("Enter your name\n");
    fgets(Arr,20,stdin);        // Hello
  
    Display(Arr);   // Display(100)
    
    return 0;
}
