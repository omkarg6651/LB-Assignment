#include<iostream>
using namespace std;

int Max(int iNo)
{
	static int iDigit = 0;
	static int iMax = iDigit;
	
	if(iNo!=0)
	{
		iDigit = iNo % 10;
		if(iDigit>iMax)
		{
			iMax = iDigit;
		}
		iNo = iNo/10;
		Max(iNo);
	}
	return iMax;
}
int main()
{
	int iValue = 0,iRet = 0;
	
	cout<<"Enter a number\n";
	cin>>iValue;
	
	iRet = Max(iValue);
	cout<<"Largest number is "<<iRet;
	
	return 0;
}