#include<iostream>
using namespace std;

void Display()
{
	static int i = 1;
	static char ch = 'a';
	
	if(i<=6)
	{
		cout<<ch<<"\t";
		i++;
		ch++;
		
		Display();
	}
}

int main()
{
	Display();
	
	return 0; 
}