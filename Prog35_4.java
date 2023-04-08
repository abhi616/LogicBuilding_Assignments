import java.util.*;

class StringDemo
{
	public String StrRevTogX(String src)
	{
		char sArr[] = src.toCharArray();
		char temp;
		int end = sArr.length-1;

		for(int i = 0; i < end; i++,end--)
		{
			temp = sArr[i];
			sArr[i] = sArr[end];
			sArr[end] = temp;
		}

		for(int i = 0; i < sArr.length; i++)
		{
		    if(sArr[i] >= 'A' && sArr[i] <= 'Z')
			{
				sArr[i]+=32;
			}
			else if(sArr[i] >= 'a' && sArr[i] <= 'z')
			{
				sArr[i]-=32;
			}
		}
	
	    String str = new String(sArr);
		
		return str;
	}
}

class Prog35_4
{
	public static void main(String ar[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter string :");
        String str = sobj.nextLine();
		
		StringDemo obj = new StringDemo();
		
		String sRet = obj.StrRevTogX(str);

		System.out.println("Reverse toggled string : "+sRet);
	}
}