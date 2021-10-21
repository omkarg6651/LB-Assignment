import java.util.*;

class StringConcatenate
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		int iValue = 0;
		String str;

		System.out.println("Enter a number");
		iValue = sobj.nextInt();

		StringDemo obj = new StringDemo();
		obj.Accept();
		str = obj.Concatenate(iValue);

		System.out.println(str);

	}
}

class StringX
{
	public String str1;
	public String str2;

	public char Arr[];
	public char Brr[];

	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter string");
		str1 = sobj.nextLine();

		System.out.println("Enter string");
		str2 = sobj.nextLine();

		Arr = str1.toCharArray();
		Brr = str2.toCharArray();

	}
}
class StringDemo extends StringX
{
	public String Concatenate(int iNo)
	{
		int i = 0;
		int j = 0;
		char Array[] = new char[Arr.length+Brr.length];
		String NewString;

		while(i<Arr.length)
		{
			Array[i] = Arr[i];
			i++;
		}
	
		while(j<iNo)
		{
			Array[i] =  Brr[j];
	 
			i++;
			j++;
		}

		NewString = new String(Array);
		return NewString;
	}
}