#include<stdio.h>
typedef unsigned int UINT;

void Bitwise(UINT,UINT);

int main()
{
	UINT iValue1 = 0,iValue2 = 0;
	
	printf("Enter number ");
	scanf("%d",&iValue1);
	
	printf("Enter number ");
	scanf("%d",&iValue2);
	
	Bitwise(iValue1,iValue2);
	
	return 0;
}
void Bitwise(UINT iNo1,UINT iNo2)
{
	UINT iCnt = 0;
	UINT iNo = 0;
	UINT iBit = 0;

	iNo = iNo1 & iNo2;
	printf("Common bits ");
	while(iNo != 0)
	{
		iBit = iNo & 1;
		iCnt++;
		if(iBit==1)
		{
			printf("%d",iCnt);
		}
		iNo = iNo>>1;
	}
}
	
	
	
	
	

	
