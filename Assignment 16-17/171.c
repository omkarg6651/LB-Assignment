#include<stdio.h>
#include<stdlib.h>
int CountEven(int Arr[],int iLength)
{
	
	int iCnt = 0, iCount = 0;
	for(iCnt = 0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]%2==0)
		{
			iCount++;
		}
		
		}
		
		return iCount;
}

int main()
{
	int iSize= 0,iCnt=0,iRet=0;
	int *p =NULL;
	
	printf("Enter the size of array\n");
	scanf("%d",&iSize);
	
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
	iRet=CountEven(p,iSize);
	printf("Count of even number is %d",iRet);
	free(p);
	return 0;
}