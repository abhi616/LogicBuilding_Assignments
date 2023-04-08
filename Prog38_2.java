import java.util.*;

class Pattern
{
	public void Pattern(String str)
	{
		for(int i = 0; i < str.length(); i++)
		{
			for(int j = 0; j < str.length(); j++)
			{
				if(i+j < (str.length()))
				{
				  System.out.print(str.charAt(j)+"\t");
				}
			}
			System.out.println();
		}
	}
}

class Prog38_2
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter string : ");
		String sValue = sobj.nextLine();
		
		Pattern obj = new Pattern();
		
		obj.Pattern(sValue);
	}
}
