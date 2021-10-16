#include<stdio.h>
typedef unsigned int UINT;

int CountOne(UINT);

int main()
{	
	UINT iValue = 0;
	int iRet = 0;
	
	printf("Enter a number ");
	scanf("%d",&iValue);
	
	iRet = CountOne(iValue);
	printf("Count is %d",iRet);
	
	return 0;
}  
int CountOne(UINT iNo)
{
	int iCnt = 0;
	
	while(iNo!=0)
	{
	iNo = iNo & (iNo-1);
	iCnt++;
	}
	return iCnt;
}