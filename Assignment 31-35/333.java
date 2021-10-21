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
		iRet = obj.CountRange(iValue);

		System.out.println("Count is "+iRet);
	}
}
class Digit
{
	public static int CountRange(int iNo)
	{
		int iDigit = 0;
		int iCnt = 0;

		while(iNo!=0)
		{
			iDigit = iNo % 10;
			if((iDigit>3)&&(iDigit<7))
			{
				iCnt++;
			}
			iNo = iNo/10;
		}
		return iCnt;
	}
}