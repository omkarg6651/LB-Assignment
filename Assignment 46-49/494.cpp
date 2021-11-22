#include<iostream>
using namespace std;

int Factorial(int iNo)
{
	static int fact = 1;
	
	if(iNo!=0)
	{
		fact = fact * iNo;
		iNo--;
		
		Factorial(iNo);
	}
	return fact;
}


int main()
{
	int iValue = 0,iRet = 0;
	
	cout<<"Enter a number\n";
	cin>>iValue;
	
	iRet = Factorial(iValue);
	cout<<"Factorial is "<<iRet;
	
	return 0;
}