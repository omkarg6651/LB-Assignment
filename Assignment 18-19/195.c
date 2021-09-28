#include<stdio.h>
#include<stdlib.h>
void ArrayDigit(int *,int);

int main()
{
	int iCnt = 0,iSize = 0;
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
	
	 ArrayDigit(p,iSize);
	
	
	free(p);
	
	return 0;
}
void ArrayDigit(int Array[],int iLength)
{
	int i = 0,iDigit = 0,iSum = 0;
	int iNo = 0;
	
	for(i=0;i<iLength;i++)
	{
		iNo = Array[i];
		while(iNo!=0)
		{
			iDigit=iNo%10;
			iSum = iSum+iDigit; 
			iNo = iNo/10;
		}
		printf("%d\t",iSum);
		iSum = 0;
	}
}