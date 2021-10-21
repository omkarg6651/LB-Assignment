import java.util.*;

class Assignment352
{
	public static void main(String args[])
	{
		boolean bRet = false;

		StringDemo obj = new StringDemo();
		obj.Accept();
		bRet = obj.CheckEqual();

		if(bRet==true)
		{
			System.out.println("Equal");
		}
		else
		{
			System.out.println("Not Equal");
		}
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

		System.out.println("Enter the string");
		str1 = sobj.nextLine();
		Arr = str1.toCharArray();
	
		System.out.println("Enter second string");
		str2 = sobj.nextLine();
		Brr = str2.toCharArray();
	}
}
class StringDemo extends StringX
{
	public boolean CheckEqual()
	{
		int i = 0,j = 0;
		boolean bAns = false;

		if(Arr.length!=Brr.length)
		{
			return bAns;
		}

		while((i!=Arr.length)||(j!=Brr.length))
		{
			if(Arr[i]==Brr[j])
			{
				bAns = true;
				i++;
			    j++;
			   
			}
			else
			{
				bAns = false;
				break;
			}

		}
		return bAns;
	}
}