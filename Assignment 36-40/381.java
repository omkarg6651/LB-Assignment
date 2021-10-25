import java.util.*;

class Assignment381
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
	public String str;
	public char Arr[];
	public int iRow;

	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter string ");
		str = sobj.nextLine();
		Arr = str.toCharArray();

		System.out.println("Enter no of rows");
		iRow = sobj.nextInt();

	}
}

class Logic extends PatternX
{
	public void Display()
	{
		int j = 0,i = 0;

		for(i=0;i<iRow;i++)
		{
			for(j=0;j<Arr.length;j++)
			{
				System.out.print(Arr[j]);
				System.out.print("\t");
			}
			System.out.print("\n");
		}
	}
}