#include<stdio.h>
main()
{
	int i,j,r,c,sum=0;
	
	printf("Enter Of Row Size = ");
	scanf("%d",&r);
	printf("Enter Of Column Size = ");
	scanf("%d",&c);
	
	int a[r][c],b[r][c],d[i][j];
	
	printf("Enter Vlaue First Element = \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	printf("Enter Value Second Element = \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			d[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("Addition Of Two Array = \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
	    	printf("%d ",d[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
}