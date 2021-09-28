#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckNumber(int *,int,int);
int main()
{
	int iCnt = 0,iSize = 0,iValue = 0;
	int *p = NULL;
	bool bRet=false;
	
	printf("Enter the no of elements ");
	scanf("%d",&iSize);
	
	printf("Enter the number ");
	scanf("%d",&iValue);
	
	p=(int *)malloc(iSize*sizeof(int));
	
	if(p==NULL)
	{
		printf("Unable to allocate memory ");
		return -1;
	}
	
	printf("Enter the numbers ");
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
	
	bRet = CheckNumber(p,iSize,iValue);
	
	if(bRet==true)
	{
		printf("Number is there ");
	}
	else
	{
		printf("Number is not present ");
	}
	free(p);
	
	return 0;
}
bool CheckNumber(int Array[],int iLength,int iNo)
{
	int i = 0;
	for(i=0;i<iLength;i++)
	{
		if(Array[i]==iNo)
		{
			break;
		}
	}
	if(i==iLength)
	{
		return false;
	}
	else
	{
		return true;
	}
}