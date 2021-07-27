#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
	int i=0;

	for(i=1;i<=iNo;i++)
	{
		printf("%d\t",i*2);
	}

}

int main()
{
	int iNo=0,iRet=0;

	printf("Enter a Number");
	scanf("%d",&iNo);

	Pattern(iNo);

	return 0;
}