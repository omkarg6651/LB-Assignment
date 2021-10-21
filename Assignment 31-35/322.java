import java.util.*;

class Main
{
	public static void main(String str[])
	{
		Scanner sobj = new Scanner(System.in);
		int i = 0,iSize = 0;

		System.out.println("Enter size");
		iSize = sobj.nextInt();

		int []Arr = new int[iSize];

		System.out.println("Enter numbers")
		for(i=0;i<iSize;i++)
		{
			Arr[i] = sobj.nextInt();
		}

		ArrayDemo obj = new ArrayDemo();
		obj.Display(Arr);
	}
}

class ArrayDemo
{
	public static void Display(int Arr[])
	{
		int i = 0;
		for(i=0;i<Arr.length;i++)
		{
			if((Arr[i]%5)==0)
			{
				System.out.println(Arr[i]);
			}
		}
	}
}