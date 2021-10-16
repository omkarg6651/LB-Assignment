 #include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

UINT Bitwise(UINT,int);

int main()
{
	UINT iValue = 0;
	int iPos1 = 0;
	UINT iRet = 0;
	
	printf("Enter a number ");
	scanf("%d",&iValue);
	
	printf("Enter position ");
	scanf("%d",&iPos1);
	
	iRet = Bitwise(iValue,iPos1);
	
	printf("Modified number is %d",iRet);
	
	return 0;
}
UINT Bitwise(UINT iNo,int iPos)
{
	UINT iMask = 0xf000000f;
	UINT iResult = 0;
		
	iResult = iMask ^ iNo;
	
	return iResult;
}