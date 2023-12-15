#include<stdio.h>
main()
{
	int i,j,r,c,sum=0;
	
	printf("Enter Of Row Size = ");
	scanf("%d",&r);
	printf("Enter Of Column Size = ");
	scanf("%d",&c);
	
	int a[r][c];
	
	printf("Enter Value Of Element = \n");
	for(i=0;i<r;i++)
	{
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
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i+j==((c+1)-2))
			{
				sum=sum+a[i][j];
			}
		}
	}
	printf("\nSum Of Anti-Diagonal = %d",sum);
}