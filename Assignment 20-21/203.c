#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char);

int main()
{
	bool bRet = false;
	char ch = '\0';
	
	printf("Enter a character ");
	scanf("%c",&ch);
	
	bRet=CheckCapital(ch);
	
	if(bRet==true)
	{
		printf("Digit");
	}
	else
	{
		printf("Not a Digit");
	}
	return 0;
}
bool CheckCapital(char c)
{
	if(c>='0'&&c<='9')
	{
		return true;
	}
	else
	{
		return false;
	}
}