#include<stdio.h>

void Reverse(char *);

int main()
{
	char Arr[20];
	char ch = '\0';
	
	printf("Enter string ");
	scanf("%[^'\n']s",&Arr);
	
	Reverse(Arr);
	
	printf("%s",Arr);
	
	return 0;
}
void Reverse(char *Brr)
{
	int temp;
	char *Crr;
	
	Crr=Brr;
	while(*Brr!='\0') 
	{
		Brr++;
	}
	Brr--;
	
	while(Brr>=Crr)
	{
		temp=*Brr;
		*Brr = *Crr;
		*Crr = temp;
		
		Brr--;
		Crr++;
	}
	
}