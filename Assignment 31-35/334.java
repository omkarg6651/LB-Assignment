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
		iRet = obj.Multiply(iValue);

		System.out.println("Result is "+iRet);
	}
}
class Digit
{
	public static int Multiply(int iNo)
	{
		int iDigit = 0;
		int iMul = 1;

		while(iNo!=0)
		{
			iDigit = iNo % 10;
			iMul = iMul * iDigit;
			iNo = iNo/10;
		}
		return iMul;
	}
}