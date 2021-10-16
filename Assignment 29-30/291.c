#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool Bitwise(UINT,int);

int main()
{
	UINT iValue = 0;
	int iPos1 = 0;
	bool bRet = false;
	
	printf("Enter a number ");
	scanf("%d",&iValue);
	
	printf("Enter position ");
	scanf("%d",&iPos1);
	
	bRet = Bitwise(iValue,iPos1);
	
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
bool Bitwise(UINT iNo,int iPos)
{
	UINT iMask = 0x1;
	UINT iResult = 0;
	
	iMask = iMask << (iPos-1);
	
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