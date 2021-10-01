#include<stdio.h>

void Display(char);

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
	printf("Decimal\t%d\n",c);
	printf("Hexadecimal\t%3x\n",c);
	printf("Octal\t%o\n",c);
}