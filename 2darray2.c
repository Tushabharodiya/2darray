#include<stdio.h>
main()
{
	int i,j,r,c,sum=0,avg,len,n;
	
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
			sum=sum+a[i][j];
		}
	}
	len=sizeof(a)/sizeof(n);
	printf("\nSum Of Array = %d",sum);
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			avg=sum/len;
		}
	}	
	printf("\nAverage of array = %d",avg);
}