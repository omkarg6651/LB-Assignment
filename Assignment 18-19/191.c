#include<stdio.h>
#include<stdlib.h>
int ArrayMax(int *,int);

int main()
{
	int iCnt = 0,iSize = 0,iRet = 0;
	int *p = NULL;
	
	printf("Enter the no of elements ");
	scanf("%d",&iSize);
	
	p=(int*)malloc(iSize*sizeof(int));
	
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
	
	iRet = ArrayMax(p,iSize);
	printf("Largest is %d",iRet);
	
	free(p);
	
	return 0;
}
int ArrayMax(int Array[],int iLength)
{
	int i = 0,iMax = 0;
	iMax = Array[i];                        // Important
	
	for(i=0;i<iLength;i++)
	{
		if(Array[i]>iMax)
		{
			iMax = Array[i];
		}
	}	
	return iMax;
}