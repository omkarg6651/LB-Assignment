#include<stdio.h>
#include<stdbool.h>

bool Display(char );

int main()
{
	char ch = '\0';
	bool bRet = false;
	
	printf("Enter character ");
	scanf("%c",&ch);
	
	bRet = Display(ch);
	
	if(bRet==true)
	{
	printf("Special character");
	}
	else
	{
	printf("Not a special character");	
	}
	return 0;
}
bool Display(char c)
{
	if(c>='!'&&c<='*')
	{
		return true;
	}
	else
	{
		return false;
	}

	
}