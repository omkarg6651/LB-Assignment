#include<stdio.h>
void  StrCpyToggle(char *src, char *dest)
{
	

while(*src != '\0')
{
	if((*src>='a' && *src<='z'))
	{
*dest=*src-32;

	}
	else if(*src>='A' && *src<='Z')
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
char arr[30] = "Marvellous Python";
char brr[30]; // Empty string
StrCpyToggle(arr,brr);
printf("%s",brr); 
return 0;
}