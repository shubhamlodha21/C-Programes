////////////////////////////////////////////////////////////////////////////
//
// Function Name :  LB35
// Description   :  Accept One Character From User And Find It's An Vowel Or Not 
// Input         :  Shubh
// Output        :  Vowel is Present
// Author        :  Shubham Lodha
// Date          :  22/06/2021
//
////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

typedef int BOOL;
# define TRUE 1
# define FALSE 0

BOOL ChkVowel (char cNo)
{
    if(cNo == 'a' || cNo == 'e' || cNo == 'i' || cNo == 'o' || cNo == 'u' ||
		cNo == 'A' || cNo == 'E' || cNo == 'I' || cNo == 'O' || cNo == 'U')
    {
        return TRUE;
    }

    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character : ");
    scanf("%c", &cValue);
 
    bRet = ChkVowel(cValue);

    if (bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }
    return 0;

} 