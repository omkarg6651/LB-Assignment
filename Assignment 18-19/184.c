#include<stdio.h>
#include<stdlib.h>
void Difference(int*,int,int,int);

int main()
{
	int iSize = 0;
	int *p = NULL;
	int iCnt = 0,iValue1 = 0,iValue2 = 0;
	
	printf("Enter the no of elements ");
	scanf("%d",&iSize);
	
	printf("Enter the Range ");
	scanf("%d%d",&iValue1,&iValue2);
	
	p=(int*)malloc(iSize*sizeof(int));
	
	if(p==NULL)
	{
		printf("Unable to allocate memory ");
		return -1;
	}
	
	printf("Enter the numbers\n");
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
	
	Difference(p,iSize,iValue1,iValue2);
	
	free(p);
	
	return 0;
}
void Difference(int Array[], int iLength,int iStart,int iEnd)
{
	int i = 0;

	for(i=0;i<iLength;i++)
	{
		if((Array[i]>iStart)&&(Array[i]<iEnd))
		{
			printf("%d\n",Array[i]);
		}
	}
	
}