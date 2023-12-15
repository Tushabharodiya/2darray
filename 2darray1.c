#include<stdio.h>
main()
{
	int i,j,r,c,len,n;
	
	printf("Enter Of Row Size = ");
	scanf("%d",&r);
	printf("Enter Of Column Size = ");
	scanf("%d",&c);
	
	int a[r][c];
	printf("Enter Value of Element = \n");
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
	
	len=sizeof(a)/sizeof(n);
	
	printf("\nLength Of Array = %d",len);
	
}