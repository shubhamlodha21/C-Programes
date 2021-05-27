////////////////////////////////////////////////////////
//Function Name:CountSmall
//Input: ABcD
//Output: 1
//Description:Counts the frequency of small letters
//Date: 27/05/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<stdio.h>

int CountSmall(char str[])
{
    int iCnt =0;
    if(str == NULL)
    {        return 0; }
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {   iCnt++; }
        str++;
    }
    return iCnt;
}
int main()
{
    char Arr[10];
    int iRet = 0;
    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);
    
    iRet = CountSmall(Arr);   // Display(100)
    printf("Frequency of small is: %d\n",iRet);
    return 0;
}
