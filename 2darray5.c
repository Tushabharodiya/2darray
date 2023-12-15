#include<stdio.h>
main()
{
	int i,j,r,c;
	
	printf("Enter Of Size = ");
	scanf("%d",&r);
	printf("Enter Of Size = ");
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
	for( int j=0; j<c; j++ )
    {
        int csum=0;
        for( int i=0; i<r; i++ )
        {
            csum = csum+a[i][j] ;
        }
        printf( " \n The sum of all the elements in column %d is %d\n ", j, csum );
    }

}