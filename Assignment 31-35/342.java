import java.util.*;

class Main
{
	public static void main(String str[])
	{
		Scanner sobj = new Scanner(System.in);
		int iValue = 0,iSize = 0,iRet = 0,i = 0;

		System.out.println("Enter size");
		iSize = sobj.nextInt();

		int []Arr = new int[iSize];

		System.out.println("Enter numbers");
		for(i=0;i<iSize;i++)
		{
			Arr[i] = sobj.nextInt();
		}

		System.out.println("Enter number");
		iValue = sobj.nextInt();

		Number obj = new Number();
		iRet = obj.FirstOcc(Arr,iValue);

		System.out.println("Index is "+iRet);
	}
}
class Number
{
	public static int FirstOcc(int Arr[],int iNo)
	{
		int i = 0;

		for(i=0;i<Arr.length;i++)
		{
			if(Arr[i]==iNo)
			{
				break;
			}
		}
		if(i<Arr.length)
		{	
		return i;
		}
		else
		{
			return -1;
		}

	}
}
