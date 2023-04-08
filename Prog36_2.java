import java.util.*;

class Pattern
{
   public void Pattern(int iRow, int iCol)
   {
	   char ch = 'A';
	   for(int i = 0; i < iRow; i++)
	   {
		   ch = 'A';
		   for(int j = 0; j < iCol; j++,ch++)
		   {
			   if(i % 2 == 0)
			   {
			     System.out.print(ch+"\t");
			   }
			   else
			   {
				   if(j == 0)
				   {
					   ch = 'a';
				   }
				   System.out.print(ch+"\t");
			   }
		   }
		   System.out.println();
	   }
   }

}

class Prog36_2
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