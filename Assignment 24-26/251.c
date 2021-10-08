#include<stdio.h>

void StringCopy(char *,char *);

int main()
{
	char Arr[20]="Marvellous Multi OS";
	char Brr[20];
	
	StringCopy(Arr,Brr);
	
	printf("%s",Brr);
	
	return 0;
}
void StringCopy(char *Src,char *Dest)
{
	while(*Src!='\0')
	{
		*Dest=*Src;
		Src++;
		Dest++;
	}
	*Dest = '\0';
}