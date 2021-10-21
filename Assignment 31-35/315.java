import java.util.*;

class Main
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		String str;

		System.out.println("Enter a string");
		str = sobj.nextLine();

		StringDemo obj = new StringDemo();
		obj.Reverse(str);

	}
}
class StringDemo
{
	public static void Reverse(String str)
	{
		int i = 0;
		for(i=str.length()-1;i>=0;i--)
		{
			System.out.print(str.charAt(i));
		}
	}
}