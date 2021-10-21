import java.util.*;

class Main
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);

		int iRet = 0;
		String str;

		System.out.println("Enter a string");
		str = sobj.nextLine();

		StringDemo obj = new StringDemo();
		iRet = obj.CountDiff(str);

		System.out.println("Difference is "+iRet);
	}
}
class StringDemo
{
	public static int CountDiff(String str)
	{
		int iDiff = 0,iCap = 0,iSmall = 0;
		int i = 0;

		for(i=0;i<str.length();i++)
		{
		if((str.charAt(i)>='A')&&(str.charAt(i)<='Z'))
		{
			iCap++;
		}
		else 
		{
			iSmall++;
		}
		}
		iDiff = iSmall - iCap;
		return iDiff;	
	}
}