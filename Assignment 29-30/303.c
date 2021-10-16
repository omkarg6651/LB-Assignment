#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool CheckBit(UINT );

int main()
{
	UINT iValue = 0;
	bool bRet = false;
	
	printf("Enter a number ");
	scanf("%d",&iValue);
	
	bRet = CheckBit(iValue);
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
bool CheckBit(UINT iNo)
{
	UINT iMask1 = 0x100;
	UINT iMask2 = 0x800;
	UINT iResult1 = 0;
	UINT iResult2 = 0;
	
	iResult1 = iMask1 & iNo;
	
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
