#include<stdio.h>
void StrCpyX(char *src, char *dest)
{
	

while(*src != '\0')
{
	if((*src>='A' && *src<='Z'))
	{
*dest=*src+32;

	}
	
	else
	{
		*dest=*src;
	}
	dest++;
src++;

}
*dest='\0';
}



int main()
{
char arr[30] = "Marvellous Python 2";
char brr[30]; // Empty string

StrCpyX(arr,brr);
printf("%s",brr); 
return 0;
}