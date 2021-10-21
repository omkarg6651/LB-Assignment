import java.util.*;

class Assignment355
{
	public static void main(String args[])
	{
		boolean bRet = false;

		StringDemo obj = new StringDemo();
		obj.Accept();
		bRet = obj.CheckPallindrome();

		if(bRet==true)
		{
			System.out.println("Pallindrome");
		}
		else
		{
			System.out.println("Not Pallindrome");
		}
	}
}

class StringX
{	
	public String str;

	public char Arr[];

	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter the string");
		str = sobj.nextLine();
		Arr = str.toCharArray();

	}
}
class StringDemo extends StringX
{
	public boolean CheckPallindrome()
	{
		int i = 0,j = Arr.length-1;
		boolean bAns = false;

		while(i<j)
		{
			if((Arr[i]==Arr[j])||((Arr[i]-Arr[j])==32)||((Arr[i]-Arr[j])==-32))
			{
				bAns = true;	
			}
			else
			{
				bAns = false;
				break;
			}
			i++;
			j--;
		}
		return bAns;
		
	}
}