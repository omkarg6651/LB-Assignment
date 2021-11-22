#include<iostream>
using namespace std;

int CountWhiteR(char *Brr)
{
	static int iCnt = 0;
	
	if(*Brr!='\0')
	{
		if(*Brr == ' ')
		{
			iCnt++;
		}
		Brr++;
		CountWhiteR(Brr);
	}
	return iCnt;
}

int main()
{
	int iRet = 0;
	char Arr[50];
	
	cout<<"Enter the string\n";
	scanf("%[^\n]s",Arr);
	
	iRet = CountWhiteR(Arr);
	cout<<"White spaces are "<<iRet<<endl;
	
	return 0;
}

