import java.util.*;

class StringDemo
{
	public boolean StrPallindrome(String Str)
	{
		char sArr[] = Str.toCharArray();
		int end = sArr.length-1;
		boolean bAns = true;
		
		for(int i = 0; i < end; i++,end--)
		{
			if(!((sArr[i] == sArr[end]) || (sArr[i] == (sArr[end]-32)) || (sArr[i] == (sArr[end]+32))))
			{
				bAns = false;
				break;
			}
		}
		
		return bAns;
	}
}

class Prog35_5
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter string : ");
		String str = sobj.nextLine();
		
		StringDemo obj = new StringDemo();
		
	    boolean bRet = obj.StrPallindrome(str);
		
		if(bRet == true)
		{
			System.out.println("TRUE");
		}
		else
		{
			System.out.println("FALSE");
		}
	}
}