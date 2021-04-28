////////////////////////////////////////////////////////
//Function Name:largest
//Input:10 20 0 5
//Output:20
//Description:Accept Elements in 2-D Array Find maximum elements with position
//Date: 28/04/2021
//Author: Shubham Lodha
///////////////////////////////////////////////////////





#include<stdio.h>

void largest(int arr[10][10],int rows,int cols)
{
	int max=arr[0][0],i=0,j=0,x=0,y=0;
	for(i=0;i<rows;i++)
        for(j=0;j<cols;j++)

      	if(arr[i][j]>max)
      	{
      		max=arr[i][j];
      		x=i+1;
      		y=++j;
      	}
    
     printf("Largest number is %d",max);
     printf("Number Found at %d row",x);
     printf("And at %d column",y);
}

 int main()
{
	int i,j,rows,cols;
	int arr[10][10];

	printf("Enter The Number of Rows\n");
	scanf("%d",&rows);

	printf("Enter The  Number of Colmns\n");
	scanf("%d",&cols);

    printf("Enter the %d Elements",rows*cols);
      for(i=0;i<rows;i++)
            for(j=0;j<cols;j++)

    scanf("%d",&arr[i][j]);

    largest(arr,rows,cols);

	return 0;
}