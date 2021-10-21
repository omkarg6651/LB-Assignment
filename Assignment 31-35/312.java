import java.util.*;

class Main
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		String str;
		int iRet = 0;

		System.out.println("Enter a string");
		str = sobj.nextLine();

		StringDemo obj = new StringDemo();
		iRet = obj.CountSmall(str);

		System.out.println("Count is "+iRet); 
	}
}
class StringDemo
{
	public static int CountSmall(String str)
	{
		int i = 0,iCnt = 0;
		for(i=0;i<str.length();i++)
		{
			if(str.charAt(i)>='a'&&str.charAt(i)<='z')
			{
				iCnt++;
			}
		}
		return iCnt;
	}
}