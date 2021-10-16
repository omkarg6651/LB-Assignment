#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool Bit(UINT );

int main()
{
	UINT iValue = 0;
	bool bRet = false;
	
	printf("Enter a number ");
	scanf("%d",&iValue);
	
	bRet = Bit(iValue);
	if(bRet==true)
	{
		printf("ON");
	}
	else
	{
		printf("OFF");
	}
	
	return 0;
}

bool Bit(UINT iNo)
{
	UINT iMask = 0x1C0;
	UINT iResult = 0;
	
	iResult = iMask & iNo;
	
	if(iResult==iMask)
	{
		return true;
	}
	else
	{
		return false;
	}
}