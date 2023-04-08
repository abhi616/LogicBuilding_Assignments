import java.util.*;

class StringDemo
{
	public int CountCapital(String str)
	{
		int iCnt = 0;
		for(int i = 0; i < str.length(); i++)
		{
			if(str.charAt(i) >= 'A' && str.charAt(i) <= 'Z')
			{
                iCnt++;
			}							
		}
		
		return iCnt;
	}
}

class Prog31_1
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter string : ");
		String s = sobj.nextLine();
		
		StringDemo obj = new StringDemo();
		
		int iRet = obj.CountCapital(s);
		
		System.out.println("Total Capital letters from the string is : "+iRet);
	}
}