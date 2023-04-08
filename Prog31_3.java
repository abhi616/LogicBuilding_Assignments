import java.util.*;

class StringDemo
{
	public int CountDiff(String str)
	{
		int iCnt1 = 0, iCnt2 = 0;
		
		for(int i = 0; i < str.length(); i++)
		{
			if(str.charAt(i) >= 'a' && str.charAt(i) <= 'z')
			{
                iCnt1++;
			}
          	else if(str.charAt(i) >= 'A' && str.charAt(i) <= 'Z')
			{
                iCnt2++;
			}		
		}
		
		return iCnt1 - iCnt2;
	}
}

class Prog31_3
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter string : ");
		String s = sobj.nextLine();
		
		StringDemo obj = new StringDemo();
		
		int iRet = obj.CountDiff(s);
		
		System.out.println("Difference is : "+iRet);
	}
}