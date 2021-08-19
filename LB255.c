////////////////////////////////////////////////////////
//Function Name:strrev
//Input:abcd
//Output:dcba
//Description:accept string from user and reverse it
//Date: 19/08/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////

#include<stdio.h>
void strrev(char src[],char dest[])
{
	int i=0;

	if(src==NULL||dest==NULL)
	{
		return;
	}

	while(*src!='\0')
	{
		src++;
		i++;
	}
	src--;
	while(i>0)
	{
		*dest=*src;
		src--;
		dest++;
		i--;
	}
	*dest='\0';
}

int main()
{
	char arr[20];
	char brr[20];

	printf("Enter The String:\n");
	scanf("%[^'\n]",arr);

	strrev(arr,brr);

	printf("After Reversing String is:%s\n",brr);

	return 0;

}