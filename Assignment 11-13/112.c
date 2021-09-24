#include<stdio.h>
void Pattern(int,int);

int main()
{
	int iValue1 = 0,iValue2 = 0;
	
	printf("Enter no od rows and columns ");
	scanf("%d%d",&iValue1,&iValue2);
	
	Pattern(iValue1,iValue2);
	return 0;
}
void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	char ch='\0';
	
	for(i=1;i<=iRow;i++)
	{
		if((i%2)==0)
			{
				ch='a';
			}
			else
			{
				ch='A';
			}
		for(j=1;j<=iCol;j++,ch++)
		{
			
			printf("%c\t",ch);
		}
		printf("%\n");
	}
}
