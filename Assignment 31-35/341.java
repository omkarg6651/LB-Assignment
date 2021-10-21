import java.util.*;

class Main
{
	public static void main(String str[])
	{
		Scanner sobj = new Scanner(System.in);

		int iSize = 0,i = 0;
		int iValue = 0;
		boolean bRet = false;

		System.out.println("Enter size");
		iSize = sobj.nextInt();

		int []Arr = new int[iSize];

		System.out.println("Enter numbers");
		for(i=0;i<iSize;i++)
		{
			Arr[i]=sobj.nextInt();
		}
		
		System.out.println("Enter a number");
		iValue = sobj.nextInt();

		Number obj = new Number();
		bRet = obj.Check(Arr,iValue);

		if(bRet==true)
		{
			System.out.println("Present");
		}	
		else
		{
			System.out.println("Not present");
		}
		
	}
		
}
class Number
{
	public static boolean Check(int Arr[],int iNo)
	{
		int i = 0;
		boolean bAns = false;

		for(i=0;i<Arr.length;i++)
		{
			if(Arr[i]==iNo)
			{
				bAns = true;
			}
		}

		return bAns;
	}
}