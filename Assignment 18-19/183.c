#include<stdio.h>
#include<stdlib.h>
int Difference(int*,int,int);

int main()
{
	int iSize = 0;
	int *p = NULL;
	int iCnt = 0,iRet = 0,iValue = 0;
	
	printf("Enter the no of elements ");
	scanf("%d",&iSize);
	
	printf("Enter the number ");
	scanf("%d",&iValue);
	
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
	
	iRet = Difference(p,iSize,iValue);
	printf("Index is %d",iRet);
	
	free(p);
	
	return 0;
}
int Difference(int Array[], int iLength,int iNo)
{
	int i = 0;

	for(i=iLength;i>0;i--)
	{
		if(Array[i]==iNo)
		{
			break;
		}
	}
	if(i==0)
	{
		return -1;
	}
	else
	{
		return i;
	}
	
}