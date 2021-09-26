
#include<stdio.h>
#include<stdlib.h>
int Difference(int Arr[],int iLength)
{
	int EvenSum = 0,OddSum = 0;
	int Difference = 0;
	for(int iCnt = 0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]%2==0)
		{
			EvenSum=EvenSum+Arr[iCnt];
		}
		else
		{
			OddSum=OddSum+Arr[iCnt];
		}
		}
		Difference=EvenSum-OddSum;
		return Difference;
}

int main()
{
	int iSize= 0,iCnt=0,iRet=0;
	int *p =NULL;
	
	printf("Enter the size of array\n");
	scanf("%d",&iSize);
	if(iSize<0)
	{
		iSize=-iSize;
	}
	
	p=(int*)malloc(iSize * sizeof(int));
	
	if(p==NULL)
	{
		printf("Unable to allocate the memory\n");
		return -1;
	}
	
	printf("Enter the elements\n");
	for(iCnt = 0;iCnt<iSize;iCnt++)
	{
		printf("Enter the element%d\t",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	iRet=Difference(p,iSize);
	printf("Result is %d",iRet);
	free(p);
	return 0;
}