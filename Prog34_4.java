import java.util.*;

class Number
{
	public void Display(int arr[], int iStart, int iEnd)
	{		
		for(int i = 0; i < arr.length; i++)
		{
			if(arr[i] > iStart && arr[i] < iEnd)
			{
				System.out.println(arr[i]+" is in between "+iStart+" & "+iEnd);
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

class Prog34_4
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the size of array  : ");
		int iSize = sobj.nextInt();
		
		System.out.println("Enter starting point  : ");
		int iValue1 = sobj.nextInt();
		
		System.out.println("Enter ending point  : ");
		int iValue2 = sobj.nextInt();
		
		int iArr[] = new int[iSize];
		
		Number obj = new Number();
		
		obj.Accept(iArr);
		obj.Display(iArr,iValue1,iValue2);		
	}
}