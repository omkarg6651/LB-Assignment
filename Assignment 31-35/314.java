import java.util.*;

class Main
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		boolean bRet = false;
		String str;

		System.out.println("Enter a string");
		str = sobj.nextLine();

		StringDemo obj = new StringDemo();
		bRet = obj.ChkVowel(str);

		if(bRet==true)
		{
			System.out.println("TRUE");
		}
		else
		{
			System.out.println("FALSE");
		}

	}
}
class StringDemo
{
	public static boolean ChkVowel(String str)
	{
		int i = 0;
		boolean bAns = false;
		for(i=0;i<str.length();i++)
		{
			if(str.charAt(i)=='a'||str.charAt(i)=='e'||str.charAt(i)=='i'||str.charAt(i)=='o'||str.charAt(i)=='u'||str.charAt(i)=='A'||str.charAt(i)=='E'||str.charAt(i)=='I'||str.charAt(i)=='O'||str.charAt(i)=='U')
			{
				bAns = true;
			}
		}
		return bAns;
	} 
}