import java.util.*;

class ArrayDemo
{
	public void Display(int arr[])
	{
		for(int i = 0; i < arr.length; i++)
		{
			if((arr[i] % 3 == 0) && (arr[i] % 5 == 0))
			{
				System.out.println(arr[i]+" is divisible by 3 & 5");
			}
		}
	}
	
	public void Accept(int arr[])
	{
		Scanner sobj = new Scanner(System.in);
		
		for(int i = 0; i < arr.length; i++)
		{
			System.out.println("Enter element "+(i+1));
			arr[i] = sobj.nextInt();
		}
	}
}

class Prog32_4
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the size of array  : ");
		int iSize = sobj.nextInt();
		
		int iArr[] = new int[iSize];
		
		ArrayDemo obj = new ArrayDemo();
		
		obj.Accept(iArr);
		obj.Display(iArr);
	}
}