#include<stdio.h>
void Reverse(char *);

int main()
{
	char Arr[20];
	int iRet = 0;
	
	printf("Enter a string ");
	scanf("%[^'\n']s",Arr);
	
	Reverse(Arr);
	
	return 0;
}
void Reverse(char *Brr)
{
	char *Crr;
	Crr=Brr;
	Crr--;
	
	while(*Brr!='\0')
	{
	Brr++;
	}
	Brr--;
	while(*Brr!=*Crr)
	{
		printf("%c",*Brr);
		Brr--;
	}	

}