////////////////////////////////////////////////////////
//Function Name:CountWht
//Input:ss ll tt t pp
//Output:4
//Description:Count of WhiteSpace in String
//Date: 27/05/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////


#include<stdio.h>
int CountWht(char str[])
{
    int iCnt =0;
    if(str == NULL)
    {        return 0; }
    while(*str != '\0')
    {
        if(*str == ' ')
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
    
    iRet = CountWht(Arr);   
    printf("Frequency of whitespace is: %d\n",iRet);
    return 0;
}
