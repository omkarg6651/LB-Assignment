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
	char i = '\0';
	if(c>='A'&&c<='Z')
	{
		for(i=c;i<='Z';i++)
		{
			printf("%c\t",i);
			c++;
		}
	}
	else if(c>='a'&&c<='z')
	{
		for(i=c;i>='a';i--)
		{
			printf("%c\t",i);
			c++;
		}
	}
	else
	{
		return;
	}
	
}