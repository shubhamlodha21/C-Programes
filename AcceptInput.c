////////////////////////////////////////////////////////
//Function Name:AcceptInput
//Input:--
//Output:--
//Description:Accept Name from user and display them
//Date: 23/05/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    char Arr[40];
    
    printf("Enter your name\n");
    scanf("%[^'\n']s",Arr);
    
    fgets(Arr,40,stdin);  // fgets(Kashat, kiti, kuthun)
    gets(Arr);
    scanf("%s",Arr);
    
    printf("Your name is : %s\n",Arr);
    
    return 0;
}
////////////////////////////////////////////////////////
//Function Name:AcceptInput
//Input:--
//Output:--
//Description:Accept Name from user and display them
//Date: 23/05/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    char Arr[40];
    
    printf("Enter your name\n");
    scanf("%[^'\n']s",Arr);
    
    fgets(Arr,40,stdin);  // fgets(Kashat, kiti, kuthun)
    gets(Arr);
    scanf("%s",Arr);
    
    printf("Your name is : %s\n",Arr);
    
    return 0;
}
