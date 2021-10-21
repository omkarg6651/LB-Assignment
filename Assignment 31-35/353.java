import java.util.*;

class Assignment353
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		boolean bRet = false;
		int iValue = 0;

		System.out.println("Enter a number");
		iValue = sobj.nextInt();

		StringDemo obj = new StringDemo();
		obj.Accept();
		bRet = obj.CheckEqual(iValue);

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
	public boolean CheckEqual(int iNo)
	{
		int i = 0,j = 0,iCnt = 0;
		boolean bAns = false;

		for(iCnt=1;iCnt<=iNo;iCnt++)
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