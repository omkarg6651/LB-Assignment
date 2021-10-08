#include<stdio.h>

int Frequency(char*,char);

int main()
{
	char Arr[20];
	char ch = '\0';
	int iRet = 0,i = 0;;
	
	printf("Enter character and string ");
	scanf("%c%[^'\n']s",&ch,Arr);
	
	iRet = Frequency(Arr,ch);
	printf("Count is %d",iRet);
	
	return 0;
}
int Frequency(char *Brr,char c)
{
	int iCnt = 0;
	while(*Brr!='\0')
	{
		if(*Brr==c)
		{
			iCnt++;
		}
		Brr++;
	}
	return iCnt;
}
