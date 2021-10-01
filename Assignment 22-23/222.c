#include<stdio.h>
int CountSmall(char *);

int main()
{
	char Arr[20];
	int iRet = 0;
	
	printf("Enter a string");
	scanf("%[^'\n']s",Arr);
	
	iRet = CountSmall(Arr);
	
	printf("Count is %d",iRet);
	return 0;
}
int CountSmall(char *Brr)
{
	int iCnt = 0;
	while(*Brr!='\0')
	{
		if((*Brr>='a')&&(*Brr<='z'))
		{
			iCnt++;
		}
		Brr++;
	}
	return iCnt;
}