#include<stdio.h>
#include<stdlib.h>
int Difference(int*,int);

int main()
{
	int iSize = 0;
	int *p = NULL;
	int iCnt = 0,iRet = 0;
	
	printf("Enter the no of elements ");
	scanf("%d",&iSize);
	
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
	
	iRet = Difference(p,iSize);
	printf("Product is %d",iRet);
	
	free(p);
	
	return 0;
}
int Difference(int Array[], int iLength)
{
	int i = 0,iPro = 1;

	for(i=0;i<iLength;i++)
	{
		if((Array[i]%2)!=0)
		{
			iPro = iPro * Array[i];
		}
	}
	return iPro;
	
}