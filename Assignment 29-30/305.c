#include<stdio.h>

typedef unsigned int UINT;
UINT toggleBit(UINT,UINT,UINT);

int main()
{
	UINT iValue = 0;
	UINT iBit1 = 0;
	UINT iBit2 = 0;
	UINT iRet = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	printf("Enter the Position\n");
	scanf("%d",&iBit1);
			
	printf("Enter the Position\n");
	scanf("%d",&iBit2);
	
	iRet=toggleBit(iValue,iBit1,iBit2);
	printf("Modified value is %d",iRet);
}
UINT toggleBit(UINT iNo, UINT iStart,UINT iEnd)
{
	
	UINT iResult = 0;
	int i = 0;
	UINT iMask=0x00000000;
	
	for(i=iStart;i<iEnd;i++)
	{
		UINT iTemp=0x00000001;
		iMask=iMask|iTemp<<(i-1);
	}
	
	iResult = iNo ^ iMask;

	return iResult;
}
	