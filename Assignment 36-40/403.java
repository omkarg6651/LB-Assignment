import java.util.*;

class Assignment401
{
	public static void main(String args[])
	{
		Scanner sobj =new Scanner(System.in);
		int iNo1 = 0,iNo2 = 0;

		System.out.println("Enter no of rows");
		iNo1 = sobj.nextInt();

		System.out.println("Enter no of columns");
		iNo2 = sobj.nextInt();

		Pattern obj = new Pattern();
		obj.Display(iNo1,iNo2);
	}
}
class Pattern
{
	public void Display(int iRow,int iCol)
	{
		int i = 0,j = 0;

		for(i=1;i<=iRow;i++)
		{
			for(j=iCol;j>0;j--)
			{
				if(i==1||i==iRow||j==iCol||j==1||i==j)
				{			
					System.out.print("*\t");
				}
				else
				{
					System.out.print("\t");
				}
			}
			System.out.print("\n");
		}
	}
}