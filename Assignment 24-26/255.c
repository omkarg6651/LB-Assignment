#include<stdio.h>

void Concatenate(char *,char *);

int main()
{
	char Arr[50] = "Marvellous Infosystems";
	char Brr[50] = "Logic Building";
	
	Concatenate(Arr,Brr);
	printf("%s",Arr);
	
	return 0;
}
void Concatenate(char *Src,char *Dest)
{
	while(*Src!='\0')
	{
		Src++;
	}
	printf(" ");
	while(*Dest!='\0')
	{
		*Src = *Dest;
		Src++;
		Dest++;
	}
	*Dest = '\0';
}