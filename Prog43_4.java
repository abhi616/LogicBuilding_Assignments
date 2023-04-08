import java.util.*;

class MyArray
{
	 public void Accept(float arr[])
	 {
		 Scanner sobj = new Scanner(System.in);
		   
		 for(int i = 0; i < arr.length ; i++)
		 {
			 System.out.println("Enter "+(i+1)+" Element : "); 
			 arr[i] = sobj.nextFloat();
		 }
	 }
	 
	 public void Percentage(float arr[])
	 {
		 for(int i = 0; i < arr.length; i++)
		 {
			 if(arr[i] < 35)
			 {
				 System.out.println("\t"+arr[i]+" : "+"Fail");
			 }
			 else if(arr[i] < 50 && arr[i] > 35)
			 {
				 System.out.println("\t"+arr[i]+" : "+"Pass class");
			 }
			 else if(arr[i] < 60 && arr[i] > 50)
			 {
				 System.out.println("\t"+arr[i]+" : "+"Second class");
			 }
			 else if(arr[i] < 70 && arr[i] > 60)
			 {
				System.out.println("\t"+arr[i]+" : "+"First class"); 
			 }
			 else if(arr[i] > 70 )
			 {
				 System.out.println("\t"+arr[i]+" : "+"First class with Distinction");
			 }
		 }
	 }
	 
}

class Prog43_4
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter size of array : ");
		int iSize = sobj.nextInt();
		
		float fArr[] = new float[iSize];
		
		MyArray obj = new MyArray();
		
		obj.Accept(fArr);
		
		obj.Percentage(fArr);
	}
}