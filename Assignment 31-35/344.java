import java.util.*;

class Main
{
	public static void main(String str[])
	{
		Scanner sobj = new Scanner(System.in);
		int iStart = 0,iEnd = 0,i = 0,iSize = 0;

		System.out.println("Enter starting point");
		iStart = sobj.nextInt();

		System.out.println("Enter ending point");
		iEnd = sobj.nextInt();

		System.out.println("Enter size");
		iSize = sobj.nextInt();

		int []Arr = new int[iSize];

		System.out.println("Enter numbers");
		for(i=0;i<iSize;i++)
		{
			Arr[i] = sobj.nextInt();
		}

		Number obj = new Number();
		obj.Display(Arr,iStart,iEnd);
	}
}
class Number
{
	public static void Display(int Arr[],int iNo1,int iNo2)
	{
		int i = 0;

		for(i=0;i<Arr.length;i++)
		{
			if(Arr[i]>iNo1&&Arr[i]<iNo2)
			{
				System.out.println(Arr[i]);
			}
		}
	}
}