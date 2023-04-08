import java.util.*;

class MyArray
{
	public void Accept(int arr[])
	{
		Scanner sobj = new Scanner(System.in);
		
		for(int i = 0; i < arr.length; i++)
		{
			System.out.println("Enter Element "+(i+1)+ " : ");
			arr[i] = sobj.nextInt(); 
		}
	}
	
	public boolean checkPalindrome(int arr[])
	{	
		int i = 0, j = arr.length-1;
		boolean bAns = true;
		
		for(i = 0; i < j; i++,j--) 
		{
			if(arr[i] != arr[j])
			{
				bAns = false;
				break;
			}
		}	
		
		return bAns;
	}
	
	public void Display(int arr[])
	{
		System.out.println("Elements from array :");
		
		for(int i = 0; i < arr.length; i++)
		{
			System.out.println("Element "+(i+1)+ " : "+arr[i]);
		}
	}
}

class Prog42_5
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		int iSize = 0;
		
		System.out.println("Enter size of array : ");
		iSize = sobj.nextInt();
		
		int iArr[] = new int[iSize];
		
		MyArray obj = new MyArray();
		
		System.out.println("Enter array elements ");
		obj.Accept(iArr);
		obj.Display(iArr);
		
		boolean bRet = obj.checkPalindrome(iArr);
		
		if(bRet == true)
		{
		  System.out.println("Array is palindrome");
		}
		else
		{
		  System.out.println("Array is not palindrome");
		}
		
	}
}