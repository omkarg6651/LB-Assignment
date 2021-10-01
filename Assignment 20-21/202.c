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
		printf("Capital");
	}
	else
	{
		printf("Not capital");
	}
	return 0;
}
bool CheckCapital(char c)
{
	if(c>='A'&&c<='Z')
	{
		return true;
	}
	else
	{
		return false;
	}
}