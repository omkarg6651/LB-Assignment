#include<stdio.h>
#include<stdlib.h>
int ArrayMin(int *,int);

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
	
	iRet = ArrayMin(p,iSize);
	printf("Smallest is %d",iRet);
	
	free(p);
	
	return 0;
}
int ArrayMin(int Array[],int iLength)
{
	int i = 0,iMin = 0;
	iMin = Array[i];                        // Important
	
	for(i=0;i<iLength;i++)
	{
		if(Array[i]<iMin)
		{
			iMin = Array[i];
		}
	}	
	return iMin;
}