#include<stdio.h>
typedef unsigned int UINT;

int Bitwise(int);

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter a number ");
	scanf("%d",&iValue);
	
	iRet = Bitwise(iValue);
	
	printf("Modified number is %d",iRet);
	
	return 0;
}
int Bitwise(int iNo)
{
	int iMask = 0x1bf;
	int iResult = 0;
	
	iResult = iMask & iNo;
	
	return iResult;
}