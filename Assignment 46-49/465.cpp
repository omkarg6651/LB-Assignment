#include<iostream>
using namespace std;

int Reverse(int iNo)
{
	static int iDigit = 0,iRev = 0;
	
	if(iNo!=0)
	{
		iDigit = iNo % 10;
		iRev = (iRev*10)+iDigit;
		iNo = iNo / 10;
		
		Reverse(iNo);
	}
	return iRev;
}

int main()
{
	int iValue = 0,iRet = 0;
	
	cout<<"Enter a number\n";
	cin>>iValue;
	
	iRet = Reverse(iValue);
	cout<<"Reversed number is "<<iRet;
	
	return 0;
}