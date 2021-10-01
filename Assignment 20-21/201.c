#include<stdio.h>
#include<stdbool.h>

bool CheckChar(char);

int main()
{
	char ch = '\0';
	bool bRet = false;
	
	printf("Enter character ");
	scanf("%c",&ch);
	
	bRet = CheckChar(ch);
	if(bRet==true)
	{
		printf("Alphabet");
	}
	else
	{
		printf("Not a alphabet ");
	}
	return 0;
}
bool CheckChar(char c)
{
	if((c>='A'&&c<='Z')||(c>='a'&&c<='z'))
	{
		return true;
	}
	else
	{
		return false;
	}
}