import java.util.*;

class Assignment365
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
		int i = 0,j = 0,iCnt = 1;

		for(i=0;i<iValue1;i++)
		{
			for(j=0;j<iValue2;j++,iCnt++)
			{
				System.out.print(iCnt);
				System.out.print("\t");
			}
			System.out.print("\n");
		}
	}
}