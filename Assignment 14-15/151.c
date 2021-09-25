#include<stdio.h>
void Pattern(int,int);

int main()
{
	int iValue1 = 0,iValue2 = 0;
	
	printf("Enter no of rows and columns ");
	scanf("%d%d",&iValue1,&iValue2);
	
	Pattern(iValue1,iValue2);
	return 0;
}
void Pattern(int iRow,int iCol)
{
	int i = 0,j = 0;
	for(i=1;i<=iRow;i++)
	{
		for(j=iCol;j>0;j--)
		{
			if(i==j)                                     
			{                                               
				printf("#\t");
			}	
			else
			{
				printf("*\t");	
			}	
		}
		printf("\n");
	}
}