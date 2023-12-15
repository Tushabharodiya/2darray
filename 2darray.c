#include<stdio.h>
main()
{
	int i,j,c,r;
	
	printf("Enter of Row Size = ");
	scanf("%d",&r);
	printf("Enter of Column size = ");
	scanf("%d",&c);
	
	int a[r][c];
	printf("Enter value of Element = \n");
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
}