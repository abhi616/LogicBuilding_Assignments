import java.util.*;

class StringDemo
{
	public boolean StrCmpX(String src, String dest, int iCnt)
	{
		char sArr[] = src.toCharArray();
		char dArr[] = dest.toCharArray();
		boolean b = true;

		for(int i = 0; i < iCnt; i++)
		{
			if(sArr[i] != dArr[i])
			{
				b = false;
				break;
			}
		}
	
		return b;
	}
}

class Prog35_3
{
	public static void main(String ar[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter first string :");
        String str1 = sobj.nextLine();

		System.out.println("Enter second string :");
        String str2 = sobj.nextLine();
		
		System.out.println("Enter number :");
        int iValue = sobj.nextInt();
		
		StringDemo obj = new StringDemo();
		
		boolean bRet = obj.StrCmpX(str1,str2, iValue);
		
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