import java.util.*;

class Pattern
{
	public void Pattern(int iRow, int iCol)
	{
		for(int i = 0; i < iRow; i++)
		{
			for(int j = 0; j < iCol; j++)
			{
				if((i == 0) || (j == 0) || (i == iRow-1) || (j == iCol-1) ||(i+j == (iRow -1)))
				{
					System.out.print("*\t");
				}
				else
				{
					System.out.print(" \t");
				}
			}
			System.out.println();
		}
	}
}

class Prog40_3
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter row count : ");
		int iValue1 = sobj.nextInt();
		
		System.out.println("Enter column count : ");
		int iValue2 = sobj.nextInt();
		
		Pattern obj = new Pattern();
		
		obj.Pattern(iValue1,iValue2);
	}
}
