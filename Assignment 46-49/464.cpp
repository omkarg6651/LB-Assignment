#include<iostream>
using namespace std;

int Min(int iNo)
{
	static int iDigit = iNo % 10;
	static int iMin = iDigit;
	
	if(iNo!=0)
	{
		iDigit = iNo % 10;
		if(iDigit<iMin)
		{
			iMin = iDigit;
		}
		iNo = iNo/10;
		Min(iNo);
	}
	return iMin;
}
int main()
{
	int iValue = 0,iRet = 0;
	
	cout<<"Enter a number\n";
	cin>>iValue;
	
	iRet = Min(iValue);
	cout<<"Smallest number is "<<iRet;
	
	return 0;
}