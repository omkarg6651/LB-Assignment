import java.util.*;

class Main
{
	public static void main(String str[])
	{
		Scanner sobj = new Scanner(System.in);
		int iValue = 0,iRet = 0;

		System.out.println("Enter a number");
		iValue = sobj.nextInt();

		Digit obj = new Digit();
		iRet = obj.CountEven(iValue);

		System.out.println("Count is "+iRet);
	}
}
class Digit
{
	public static int CountEven(int iNo)
	{
		int iDigit = 0;
		int iCnt = 0;

		while(iNo!=0)
		{
			iDigit = iNo%10;
			if(iDigit%2==0)
			{
				iCnt++;
			}
			iNo = iNo / 10;
		}
		return iCnt;
	}
}

