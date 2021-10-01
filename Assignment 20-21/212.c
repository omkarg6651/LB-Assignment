#include<stdio.h>

void Display(char );

int main()
{
	char ch = '\0';
	
	printf("Enter character ");
	scanf("%c",&ch);
	
	Display(ch);
	return 0;
}
void Display(char c)
{
	if(c>='A'&&c<='Z')
	{
		printf("%c",c+32);
	}
	else if(c>='a'&&c<='z')
	{
		printf("%c",c-32);
	}
	else
	{
		printf("%c",c);
	}
}