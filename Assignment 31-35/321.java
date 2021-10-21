import java.util.*;

class Main
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		int iSize = 0,i = 0;
		int iRet = 0;
		
		System.out.println("Enter size");
		iSize = sobj.nextInt();

		int []Arr = new int[iSize];

		System.out.println("Enter numbers");
		for(i=0;i<iSize;i++)
		{
			Arr[i]=sobj.nextInt();
		}

		ArrayDemo obj = new ArrayDemo();
		iRet=obj.Difference(Arr);

		System.out.println("Difference is "+iRet);
	}
}
class ArrayDemo
{
	public static int Difference(int Brr[])
	{
		int i = 0,iEven = 0,iOdd = 0,iDiff = 0;
		for(i=0;i<Brr.length;i++)
		{
			if((Brr[i]%2)==0)
			{
				iEven = iEven+Brr[i];
			}
			else
			{
				iOdd = iOdd+Brr[i];
			}
		}
		iDiff = iEven - iOdd;
		return iDiff;
	}
}