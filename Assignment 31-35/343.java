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
		iRet = obj.LastOcc(Arr,iValue);

		System.out.println("Index is "+iRet);
	}
}
class Number
{
	public static int LastOcc(int Arr[],int iNo)
	{
		int i = 0;

		for(i=Arr.length-1;i>=0;i--)
		{
			if(Arr[i]==iNo)
			{
				break;
			}
		}
		return i;
	}
}
