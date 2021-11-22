#include<iostream>
using namespace std;

int Sum(int iNo)
{
	static int iSum = 0,iDigit = 0;
	
	if(iNo!=0)
	{
		iDigit = iNo % 10;
		iSum = iSum + iDigit;
		iNo = iNo / 10;
	
		Sum(iNo);
	}
	return iSum;
	
	
}

int main()
{
	int iValue = 0,iRet = 0;
	
	cout<<"Enter a number\n";
	cin>>iValue;
	
	iRet = Sum(iValue);
	cout<<"Summation is "<<iRet;
	
	return 0;
}