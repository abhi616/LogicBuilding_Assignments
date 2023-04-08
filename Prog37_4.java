import java.util.*;

class Pattern
{
	public void Pattern(int iRow, int iCol)
	{
		for(int i = 0; i < iRow; i++)
		{
			for(int j = 0; j < iCol ; j++)
			{
				if(j % 2 == 0)
				{
				   System.out.print("*\t");
				}
				else
				{
                   System.out.print("#\t");
				}					
				
			}
			System.out.println();
		}
	}
}

class Prog37_4
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter row Count : ");
		int iValue1 = sobj.nextInt();
		
		System.out.println("Enter column Count : ");
		int iValue2 = sobj.nextInt();
		
		Pattern obj = new Pattern();
		
		obj.Pattern(iValue1,iValue2);
	}
}
