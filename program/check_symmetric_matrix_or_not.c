#include<stdio.h>
#include<conio.h>
void main()
{
	int r,c,a[3][3],t[3][3],flag=0;
	clrscr();
	printf("enter the elements of the matrix:\n");
	for(r=0;r<=2;r++)
	{
		for(c=0;c<=2;c++)
		scanf("%d",&a[r][c]);
	}
	printf("\n matrix is:\n");
	for(r=0;r<=2;r++)
	{
		for(c=0;c<=2;c++)
		printf("%d ",a[r][c]);
		printf("\n");
	}
	printf("\ntranspose is:\n");
	for(c=0;c<=2;c++)
	{
		for(r=0;r<=2;r++)
		t[c][r]=a[r][c];
	}
	for(r=0;r<=2;r++)
	{
		for(c=0;c<=2;c++)
		printf("%d ",t[r][c]);
		printf("\n");
	}
	for(r=0;r<=2;r++)
	{
		for(c=0;c<=2;c++)
		{
			if(a[r][c]!=t[r][c])
			{
				flag=1;
				break;
			}
		}
	}
	if(flag==1)
	printf("\nMatrix is not Symmetric");
	else
	printf("\nMatrix is Symmetric");
	getch();
}
