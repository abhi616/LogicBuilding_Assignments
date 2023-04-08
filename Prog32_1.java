import java.util.*;

class ArrayDemo
{
	public int Difference(int arr[])
	{
		int iSum1 = 0, iSum2 = 0;
		
		for(int i = 0; i < arr.length; i++)
		{
			if(arr[i] % 2 == 0)
			{
				iSum1 = iSum1 + arr[i];
			}
			else
			{
                iSum2 = iSum2 + arr[i];
			}				
			
		}
		return iSum1 - iSum2;
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
	
	public void Display(int arr[])
	{
		for(int i = 0; i < arr.length; i++)
		{
			System.out.println("Element "+(i+1)+" : "+arr[i]);
		}
	}
}

class Prog32_1
{
	public static void main(String ar[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter size of array : ");
		int iSize = sobj.nextInt();
		
		int iArr[] = new int[iSize];
		
		ArrayDemo obj = new ArrayDemo();
		
		obj.Accept(iArr);
		obj.Display(iArr);
		
		int iRet = obj.Difference(iArr);
		
		System.out.println("Difference : "+iRet);
	}
}