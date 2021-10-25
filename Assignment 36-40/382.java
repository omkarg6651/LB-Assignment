import java.util.*;

class Assignment382
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
	public int iRow;
	public String str;
	public char Arr[];

	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter string");
		str = sobj.nextLine();
		Arr = str.toCharArray();

	}
}
class Logic extends PatternX
{
	public void Display()
	{
		int i = 0,j = 0,l = 0;

		for(i=0;i<Arr.length;i++)
		{
			l = 0;
			for(j=Arr.length-1;j>=0;j--,l++)
			{
				if(i<=j)
				{
					System.out.print(Arr[l]);
					System.out.print("\t");
				}
				
			}
			System.out.print("\n");
		}
	}
}