////////////////////////////////////////////////////////
//Function Name:DisplayS
//Input:5 
//Output:* * * * *
//Description:Accept Number from user and Display Stars by using Recurssion 
//Date: 04/06/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////


#include<stdio.h>

void DisplayR()
{
    static int i = 1;          // 1
    if(i<= 4)           // 2
    {
        printf("*\n");  // 4
        i++;                // 3
        DisplayR();     // Recursive call
    }
}

int main()
{
    DisplayR();
    printf("End of main\n");
    return 0;
}







