#include<iostream>
using namespace std;

void Display(int iNo)
{
	static int i = 1;
	static char ch = 'A';
	
	if(i<=iNo)
	{
		cout<<ch<<"\t";
		i++;
		ch++;
		
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