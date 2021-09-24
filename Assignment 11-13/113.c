#include<stdio.h>
void Pattern(int,int);

int main()
{
	int iValue1 = 0,iValue2 = 0;
	
	printf("Enter rows and columns ");
	scanf("%d%d",&iValue1,&iValue2);
	
	Pattern(iValue1,iValue2);
	return 0;
}
void Pattern(int iRow,int iCol)
{
	int i = 0,j=0;
	char ch='\0';
	for(i=0,ch='A';i<iRow;i++,ch++)
	{
		for(j=0;j<iCol;j++)
		{
			printf("%c\t",ch);
		}
		printf("\n");
	}
}