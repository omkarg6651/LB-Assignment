#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool Fifteen(UINT );

int main()
{
	UINT iValue = 0;
	bool bRet = false;
	
	printf("Enter a number ");
	scanf("%d",&iValue);
	
	bRet = Fifteen(iValue);
	
	if(bRet==true)
	{
		printf("On");
	}
	else
	{
		printf("Off");
	}
	
	return 0;
}
bool Fifteen(UINT iNo)
{
	UINT iMask = 0x4000;
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