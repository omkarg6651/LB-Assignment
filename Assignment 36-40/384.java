import java.util.*;

class Assigenment384
{
	public static void main(String[] args)
	{

		Scanner sobj = new Scanner(	System.in);
		String Input;

		System.out.println("Enter the string");
		Input =sobj.nextLine();

		Pattern pobj = new Pattern();

		pobj.DisplayPattern(Input);
	}
}

class Pattern
{
	public void DisplayPattern(String Str)
	{
		int i = 0, j = 0, n = 0,k =Str.length();
		int m = (2*k-1);

		for(i = 0; i < m; i++)
		{
			if(i==Str.length()+n)
			{
				n++;
				k=j+1;
			}
			for(j = 0; j < k && j < Str.length(); j++)
			{
				System.out.print(Str.charAt(j)+"\t");
			}
			System.out.println("");
			k--;
			
		}
	}

} 