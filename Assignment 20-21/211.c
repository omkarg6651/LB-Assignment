#include<stdio.h>
 
void Display();
 
int main()
{
	Display();
	return 0;
}
void Display()
{
	int i = 0;
	for(i=0;i<=127;i++)
	{
	printf("%d\t%x\t%o\t%c\n",i,i,i,i);
	}
}
