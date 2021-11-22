#include<iostream>
using namespace std;

int CountSmall(char *Brr)
{
	static int iCnt = 0;
	
	if(*Brr!='\0')
	{
		if((*Brr >= 'a')&&(*Brr <= 'z'))
		{
			iCnt++;
		}
		Brr++;
		CountSmall(Brr);
	}
	return iCnt;
}

int main()
{
	char Arr[30];
	int iRet = 0;
	
	cout<<"Enter a string\n";
	scanf("%[^\n]s",Arr);
	
	iRet = CountSmall(Arr);
	cout<<"Count is "<<iRet;
	
	return 0;
}
