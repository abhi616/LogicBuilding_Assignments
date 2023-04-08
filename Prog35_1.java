import java.util.*;

class StringDemo
{
	public String StrNcatX(String src, String dest, int iCnt)
	{
		int iLength = src.length();
		char dArr[] = dest.toCharArray();
		char sArr[] = new char[iCnt+iLength];
		
		for(int i = 0; i < iCnt; i++, iLength++)
		{		
			sArr[iLength+1] = dArr[i];
		}
		
		String src1 = new String(sArr);
        System.out.println(src1);
		return src1;
	}
}

class Prog35_1
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
		
		String sRet = obj.StrNcatX(str1,str2,iValue);
		
		System.out.println("Concatinated string :"+sRet);
	}
}