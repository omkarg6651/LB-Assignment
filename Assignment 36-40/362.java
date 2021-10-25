import java.util.*;

class Assignment362
{
	public static void main(String args[])
	{
		Logic obj = new Logic();
		obj.Accept();
		obj.Display();
	}
}

class PatternX
{
	public int iValue1;
	public int iValue2;

	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);


		System.out.println("Enter no of rows");
		iValue1 = sobj.nextInt();

		System.out.println("Enter no of columns");
		iValue2 = sobj.nextInt();
	}
}

class Logic extends PatternX
{
	public void Display()
	{
		int i = 0,j = 0;
		char ch = 'A';

		for(i=0;i<iValue1;i++)
		{
			if(i%2==0)
			{
				ch = 'A';
			}
			else
			{
				ch = 'a';
			}
			for(j=0;j<iValue2;j++,ch++)
			{
				System.out.print(ch);
				System.out.print("\t");
			}
			System.out.print("\n");
		}
	}
}