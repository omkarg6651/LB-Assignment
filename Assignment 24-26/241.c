#include<stdio.h>
#include<stdbool.h>

bool Check(char *,char );

int main()
{
	char ch = '\0';
	char Arr[20];
	bool bRet = false;
	int i = 0;
	
	printf("Enter character and string ");
	scanf("%c%[^'\n']s",&ch,Arr);
	
	bRet = Check(Arr,ch);
	if(bRet==true)
	{
		printf("Present ");
	}
	else
	{
		printf("Not present");
	}
	return 0;	
}
bool Check(char *Brr,char c)
{
	while(*Brr!='\0')
	{
		if(*Brr==c)
		{
			return true;
		}
		Brr++;
	}
	return false;
}












