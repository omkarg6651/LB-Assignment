#include<iostream>
using namespace std;

int Count(char *Brr)
{
	static int iCnt = 0;
	
	if(*Brr!='\0')
	{
		iCnt++;
		Brr++;
		
		Count(Brr);
	}
	return iCnt;
}


int main()
{
	char Arr[30];
	int iRet = 0;
	
	cout<<"Enter the string\n";
	scanf("%[^\n]s",Arr);
	
	iRet = Count(Arr);
	cout<<"Count is "<<iRet;
	
	return 0;
}