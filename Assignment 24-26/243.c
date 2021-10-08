#include<stdio.h>

int Index(char *,char);

int main()
{
	char Arr[20];
	char ch = '\0';
	int iRet = 0;
	
	printf("Enter character and string ");
	scanf("%c%[^'\n']s",&ch,Arr);
	
	iRet = Index(Arr,ch);
	printf("Index is %d",iRet);
	
	return 0;
}
int Index(char *Brr,char c)
{
	int i = 0;
	while(*Brr!='\0')
	{
		if(*Brr==c)
		{
			return i;
		}
		Brr++;
		i++;
	}
}