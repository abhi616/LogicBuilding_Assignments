import java.util.*;

class StringDemo
{
	public void Reverse(String str)
	{
		int i = 0, j = str.length()-1;
		char cTemp;
		char arr[] = str.toCharArray();
		
		while(i < j)
		{
			cTemp = arr[i];
			arr[i] = arr[j];
			arr[j] = cTemp;

			i++;
			j--;
		}
		
		String s = new String(arr);
		
	    System.out.println("Reverse string is : "+s);
	}
}

class Prog31_5
{
	public static void main(String arr[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter string : ");
		String s = sobj.nextLine();
		
		StringDemo obj = new StringDemo();
		
		obj.Reverse(s);
	}
}