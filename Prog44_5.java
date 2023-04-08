import java.util.*;

class MyArray
{
	 public void Accept(int arr[])
	 {
		 Scanner sobj = new Scanner(System.in);
		   
		 for(int i = 0; i < arr.length ; i++)
		 {
			 System.out.println("Enter "+(i+1)+" Element : "); 
			 arr[i] = sobj.nextInt();
		 }
	 }
	 
	 public void Pattern(int arr[])
	 {	 
		 for(int i = 0; i < arr.length ; i++)
		 {
			 for(int j = 1; j <= arr[i]; j++)
			 {
				 System.out.print("*\t");
			 }
			 System.out.println();
		 }

	 }
}

class Prog44_5
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter size of array : ");
		int iSize = sobj.nextInt();
		
		int iArr[] = new int[iSize];
		
		MyArray obj = new MyArray();
		
		obj.Accept(iArr);
		
		obj.Pattern(iArr);
	}
}