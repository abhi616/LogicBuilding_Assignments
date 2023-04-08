import java.util.*;

class StringDemo
{
	public boolean ChkVowel(String str)
	{		
	    char arr[] = str.toCharArray();
		
		for(int i = 0; i < arr.length; i++)
		{
			if((arr[i] == 'a') || (arr[i] == 'A') || (arr[i] == 'E') || (arr[i] == 'e') || (arr[i] == 'I') || (arr[i] == 'i') || (arr[i] == 'o')|| (arr[i] == 'O') || (arr[i] == 'u') || (arr[i] == 'U'))
			{
               return true;
			}	
		}

        return false;
	}
}

class Prog31_4
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter string : ");
		String s = sobj.nextLine();
		
		StringDemo obj = new StringDemo();
		
		boolean bRet = obj.ChkVowel(s);
		
		if(bRet == true)
		{
		    System.out.println("Vowel is present");
		}
		else
		{
			System.out.println("Vowel is not present");
		}
	}
}