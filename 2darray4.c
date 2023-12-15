#include<stdio.h>
main()
{
	int i,j,r,c;
	
	printf("Enter Of Row Size = ");
	scanf("%d",&r);
	printf("Enter Of Column Size = ");
	scanf("%d",&c);
	
	int a[r][c];
	
	printf("Enter value Of Element = \n");
	for(i=0;i<r;i++)
	{
		int sum=0;
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
		
	printf("Elements in the matrix are \n");	
	for(i=0;i<r;i++)
	{
		int sum=0;
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\nSum Of All Row Elements = \n");
	for(i=0;i<r;i++)
	{
		int sum=0;
		for(j=0;j<c;j++)
		{
			sum=sum+a[i][j];
		}
		printf("Row-%d = %d\n",i,sum);
	}
	
}