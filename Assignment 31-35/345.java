import java.util.*;

class Main
{
	public static void main(String str[])
	{
		Scanner sobj = new Scanner(System.in);
		int iSize = 0,iRet = 0,i = 0;

		System.out.println("Enter size");
		iSize = sobj.nextInt();

		int []Arr = new int[iSize];

		System.out.println("Enter numbers");
		for(i=0;i<iSize;i++)
		{
			Arr[i] = sobj.nextInt();
		}

		Number obj = new Number();
		iRet = obj.Product(Arr);

		if(iRet==1)
		{
			System.out.println("Product is 0"); 
		}
		else
		{
			System.out.println("Product is "+iRet);
		}
	}
}
class Number
{
	public static int Product(int Arr[])
	{
		int iPro = 1,i = 0;

		for(i=0;i<Arr.length;i++)
		{
			if((Arr[i]%2)!=0)
			{
				iPro = iPro * Arr[i];
			}
		}
		return iPro;
	}
}