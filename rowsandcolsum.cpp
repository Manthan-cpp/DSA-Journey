#include <stdio.h>
int main()
{
	int i ,j,n, sumrow=0,sumcol=0 ;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int a[n][n];
	printf("Enter the array : \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		 sumrow=sumrow+a[i][j];
		}
		printf("Sum of row %d = %d\n",(i+1),sumrow);
		sumrow=0;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		 sumcol=sumcol+a[j][i];
		}
		printf("Sum of coloumn %d = %d\n",(i+1),sumcol);
		sumcol=0;
	}
	return 0;
	

}
