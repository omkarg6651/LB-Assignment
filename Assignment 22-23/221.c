#include<stdio.h>
int CountCapital(char *);

int main()
{
	char Arr[20];
	int iRet = 0;
	
	printf("Enter a string ");
	scanf("%[^\n]c",Arr);
	
	iRet = CountCapital(Arr);
	printf("Count is %d",iRet);
	
	return 0;
}
int CountCapital(char *Brr)
{
	int iCnt = 0;
	
	while(*Brr!='\0')
	{
	if((*Brr>='A')&&(*Brr<='Z'))
	{
		iCnt++;
	}
	Brr++;
	}
	return iCnt;
}