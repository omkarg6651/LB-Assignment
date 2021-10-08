#include<stdio.h>

void Reverse(char *,char *);

int main()
{
	char Arr[50]; 
	char Brr[50];
	
	printf("Enter the string ");
	scanf("%[^'\n's]",Arr);
	
	Reverse(Arr,Brr);
	printf("%s",Brr);
	
	return 0;
}
void Reverse(char *Src,char *Dest)
{
	char *ptr;
	ptr=Src;
	ptr--;
	while(*Src!='\0')
	{
		Src++;
	}
	Src--;

	while(ptr!=Src)
	{
		*Dest = *Src;
		Src--;
		Dest++;
	}
	*Dest = '\0';
}