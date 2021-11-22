#include<iostream>
using namespace std;

void Display(int iNo)
{
	static int i = iNo;
	
	if(i>0)
	{
		cout<<i<<"\t";
		i--;
		
		Display(iNo);
	}
}

int main()
{
	int iValue = 0;
	
	cout<<"Enter a number\n";
	cin>>iValue;
	
	Display(iValue);
	
	return 0;
}