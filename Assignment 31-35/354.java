import java.util.*;

class Assignment354
{
	public static void main(String args[])
	{
		String str;

		StringDemo obj = new StringDemo();
		obj.Accept();
		str = obj.StringReverse();

		System.out.println(str);
	}
}

class StringX
{
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

class StringDemo extends StringX
{
	public String StringReverse()
	{
		char temp;
		int i = 0,j = Arr.length-1;

		while(i<j)
		{
			temp = Arr[j];
			Arr[j] = Arr[i];
			Arr[i] = temp;

			i++;
			j--;
		}
		String Newstring = new String(Arr);
		return Newstring;
	}
}