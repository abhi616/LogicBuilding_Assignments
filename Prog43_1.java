import java.util.*;

class MyArray
{
	public void Accept(int arr[])
	{
		Scanner sobj = new Scanner(System.in);
		
		for(int i = 0; i< arr.length; i++)
		{
			System.out.println("Enter Element : "+(i+1)+ " : ");
			arr[i] = sobj.nextInt();
		}
	}
	
	public void ReverseArray(int arr[])
	{
		int no = 0, Rev = 0, Digit = 0;
		
		for(int i = 0; i < arr.length; i++)
		{
			no = arr[i];
			
			while(no>0)
			{
				Digit = no % 10;
				Rev = Rev*10 + Digit;
				no = no /10;
			}
			arr[i] = Rev;
			Rev = 0;
		}
		
		Display(arr);
	}
	
	public void Display(int arr[])
	{
		System.out.println("Array elements are as follows : ");
		
		for(int i = 0; i < arr.length; i++)
		{
			System.out.println("Element : "+(i+1)+ " : "+arr[i]);
		}
	}
}

class Prog43_1
{
    public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter size of array : ");
		int iSize = sobj.nextInt();
		
		int iArr[] = new int[iSize];
		
		MyArray obj = new MyArray();
		
		obj.Accept(iArr);
		
		obj.ReverseArray(iArr);
	}
}	