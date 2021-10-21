import java.util.*;

class Main
{
	public static void main(String str[])
	{
		Scanner sobj = new Scanner(System.in);
		int iRet = 0;
		String Str;

		System.out.println("Enter a string");
		Str = sobj.nextLine();

		StringDemo obj = new StringDemo();
		iRet = obj.CountCapital(Str);

		System.out.println("Count is "+iRet);

	}
}
class StringDemo
{
	public static int CountCapital(String str)
	{
		int i = 0;
		int iCnt = 0;
		for(i=0;i<str.length();i++)
		{
			if((str.charAt(i)>='A')&&(str.charAt(i)<='Z'))
			{
				iCnt++;
			}
		}
		return iCnt;
	}
}