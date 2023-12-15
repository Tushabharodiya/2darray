#include<stdio.h>
main()
{
	int i,j,sum=0;
	
	int a[5][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
	
	
	printf("Element Of The Matrix = \n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(i!=0 && i!=4 && j!=0 && j!=4)
			{
				sum=sum+a[i][j];
			}
		}
	}
	printf("\nSum Of Inner Element = %d",sum);
}