#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool CheckBit(UINT,int ,int );

int main()
{
	UINT iValue = 0;
	int iValue1 = 0,iValue2 = 0;
	bool bRet = false;
	
	printf("Enter a number ");
	scanf("%d",&iValue);
	
	printf("Enter position 1 ");
	scanf("%d",&iValue1);
	
	printf("Enter position 2 ");
	scanf("%d",&iValue2);
	
	bRet = CheckBit(iValue,iValue1,iValue2);
	if(bRet==true)
	{
		printf("TRUE");
	}
	else
	{
		printf("False");
	}
	
	return 0;
}
bool CheckBit(UINT iNo,int iPos1,int iPos2)
{
	UINT iMask1 = 0x1;
	UINT iMask2 = 0x1;
	UINT iResult1 = 0;
	UINT iResult2 = 0;
	
	iMask1 = iMask1 << (iPos1-1);
	iResult1 = iMask1 & iNo;
	
	iMask2 = iMask2 << (iPos2-1);
	iResult2 = iMask2 & iNo;
	
	if((iMask1==iResult1)||(iMask2==iResult2))
	{
		return true;
	}
	else 
	{
		return false;
	}
	
}