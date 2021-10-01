#include<stdio.h>
#include<stdbool.h>

void DisplaySchedule(char);

int main()
{
	char ch = '\0';
	
	printf("Enter division ");
	scanf("%c",&ch);
	
	DisplaySchedule(ch);

	return 0;
}
void DisplaySchedule(char c)
{
	if(c=='A'||c=='a')
	{
		printf("Your exam is at 7 AM ");
	}
	else if(c=='B'||c=='b')
	{
		printf("Your exam is at 8:30 AM");
	}
	else if(c=='C'||c=='c')
	{
		printf("Your exam is at 9:20 AM");
	}
	else if(c=='D'||c=='d')
	{
		printf("Your exam is at 10:30 AM ");
	}
	else
	{
		printf("No division ");
	}
}