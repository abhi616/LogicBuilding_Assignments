import java.util.*;

class StringDemo
{
	public int CountSmall(String str)
	{
		int iCnt = 0;
		for(int i = 0; i < str.length(); i++)
		{
			if(str.charAt(i) >= 'a' && str.charAt(i) <= 'z')
			{
                iCnt++;
			}							
		}
		
		return iCnt;
	}
}

class Prog31_2
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter string : ");
		String s = sobj.nextLine();
		
		StringDemo obj = new StringDemo();
		
		int iRet = obj.CountSmall(s);
		
		System.out.println("Total Small letters from the string is : "+iRet);
	}
}