#include<stdio.h>

void Strncpy(char *,char *,int);

int main()
{
	char Arr[20]="Marvellous Multi OS";
	char Brr[20];
	
	Strncpy(Arr,Brr,10);
	
	printf("%s",Brr);
	
	return 0;
}
void Strncpy(char *Src,char *Dest,int iCnt)
{
	while((*Src!='\0')&&(iCnt!=0))
	{
		*Dest = *Src;
		Dest++;
		Src++;
		iCnt--;
	}
	*Dest = '\0';
}