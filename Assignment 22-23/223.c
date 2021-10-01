#include<stdio.h>
int Diff(char *);

int main()
{
	char Arr[20];
	int iRet = 0;
	
	printf("Enter a string");
	scanf("%[^'\n']s",Arr);
	
	iRet = Diff(Arr);
	
	printf("Count is %d",iRet);
	return 0;
}
int Diff(char *Brr)
{
	int iCntS = 0,iCntC = 0,iDiff = 0;
	while(*Brr!='\0')
	{
		if(*Brr>='A'&&*Brr<='Z')
		{
			iCntC++;
		}
		else if(*Brr>='a'&&*Brr<='z')
		{
			iCntS++;
		}
		Brr++;
	}	
	iDiff = iCntS - iCntC;
	return iDiff;
}