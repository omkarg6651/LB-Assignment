import java.util.*;

class Main
{
	public static void main(String str[])
	{
		Scanner sobj = new Scanner(System.in);
		int iValue = 0;
		int iRet = 0;

		System.out.println("Enter a number");
		iValue = sobj.nextInt();

		Digit obj = new Digit();
		iRet = obj.Difference(iValue);

		System.out.println("Count is "+iRet);
	}
}
class Digit
{
	public static int Difference(int iNo)
	{
		int iDigit = 0;
		int iEven = 0,iOdd = 0,iAns = 0;

		while(iNo!=0)
		{
			iDigit = iNo % 10;
			if((iDigit%2)==0)
			{
				iEven = iEven + iDigit;
			}
			else
			{
				iOdd = iOdd + iDigit;
			}
			iNo = iNo/10;
		}
		iAns = iEven - iOdd;
		return iAns;
	}
}