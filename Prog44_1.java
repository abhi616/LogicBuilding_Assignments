import java.util.*;

class MyArray
{
	 public void Accept(char arr[])
	 {
		 Scanner sobj = new Scanner(System.in);
		   
		 for(int i = 0; i < arr.length ; i++)
		 {
			 System.out.println("Enter "+(i+1)+" Character : "); 
			 arr[i] = sobj.next().charAt(0);
		 }
	 }
	 
	 public void ArrayReplace(char arr[])
	 {
		 
		 for(int i = 0; i < arr.length ; i++)
		 {
			 if(arr[i] >= 'A' && arr[i] <= 'Z')
			 {
				 arr[i]+=32;
			 }
		 }

	 }
	 
	 public void Display(char arr[])
	 {
		  System.out.println("Characters from the array are as follows : "); 
		  
		 for(int i = 0; i < arr.length ; i++)
		 {
			 System.out.println((i+1)+" Character : "+arr[i]);
		 }
	 }
}

class Prog44_1
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter size of character array : ");
		int iSize = sobj.nextInt();
		
		char cArr[] = new char[iSize];
		
		MyArray obj = new MyArray();
		
		obj.Accept(cArr);
		obj.Display(cArr);
		
		obj.ArrayReplace(cArr);
		obj.Display(cArr);
	}
} 