import java.util.*;

class MyArray
{
     public String charRemove(String Str, char c)
	 {
         char arr[] = Str.toCharArray();
		 char newArr[] = new char[arr.length];
		 
		 for(int i = 0; i < arr.length; i++)
		 {
			 if(arr[i] != c)
			 {
				 newArr[i] = arr[i];
			 }
		 }
		 
		 String res = new String(newArr);
		 
		 return res;
	 }		 
}

class Prog45_4
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter string : ");
		String str = sobj.nextLine();
		
		System.out.println("Enter character : ");
		char ch = sobj.next().charAt(0);

		MyArray obj = new MyArray();
		
		String s = obj.charRemove(str,ch);
		
		System.out.println("New string after removing "+ch+" : "+s);
	}
}