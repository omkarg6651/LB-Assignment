#include<stdio.h>

int Display(char *);

int main()
{
	char Arr[20];
	int iRet = 0;
	
	printf("Enter a string ");
	scanf("%[^'\n']s",Arr);
	
	iRet = Display(Arr);
	printf("number of white spaces are %d",iRet);
	
	return 0;
}

int Display(char *Brr)
{
	int iCnt = 0;
	while(*Brr!='\0')
	{
		if(*Brr==' ')
		{
			iCnt++;
		}	
		Brr++;
	}
	return iCnt;
}