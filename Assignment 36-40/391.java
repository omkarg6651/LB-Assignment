import java.util.*;

class Assignment391
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		String str;
		char Arr[];

		System.out.println("Enter string");
		str = sobj.nextLine();
		Arr = str.toCharArray();

		Pattern obj = new Pattern();
		obj.Display(Arr);
	}
}
class Pattern
{
	public static void Display(char Arr[])
	{
		int i = 0,j = 0,l = 0;

		for(i=0;i<Arr.length;i++)
		{
			l = 0;
			for(j=0;j<Arr.length;j++,l++)
			{
				if(i>=j)
				{
					System.out.print(Arr[l]+"\t");
				}
				else
				{
					System.out.print("*\t");
				}
			}
			System.out.print("\n");
		}
	}
}