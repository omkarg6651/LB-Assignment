#include<stdio.h>

void Display(char *);

int main()
{
	char Arr[20];
	
	printf("Enter a string ");
	scanf("%[^'\n']s",Arr);
	
	Display(Arr);
	return 0;
}
void Display(char *Brr)
{
	while(*Brr!='\0')
	{
		if(*Brr>='a'&&*Brr<='z')
		{
			printf("%c",*Brr-32);
		}
		else if(*Brr>='A'&&*Brr<='Z')
		{
			printf("%c",*Brr+32);
		}
		Brr++;
	}
}