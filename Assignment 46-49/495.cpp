#include<iostream>
using namespace std;

int Product(int iNo)
{
	static int iProduct = 1;
	static int iDigit = 0;
	
	if(iNo!=0)
	{
		iDigit = iNo % 10;
		iProduct = iProduct * iDigit;
		iNo = iNo / 10;
	
		Product(iNo);
	}
	return iProduct;
	
	
}

int main()
{
	int iValue = 0,iRet = 0;
	
	cout<<"Enter a number\n";
	cin>>iValue;
	
	iRet = Product(iValue);
	cout<<"Product is "<<iRet;
	
	return 0;
}