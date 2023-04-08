import java.util.*;

class Number
{
	public boolean Check(int arr[], int No)
	{
		for(int i = 0; i < arr.length; i++)
		{
			if(arr[i] == No)
			{
				return true;
			}
		}
		
		return false;
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

class Prog34_1
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the size of array  : ");
		int iSize = sobj.nextInt();
		
		System.out.println("Enter the element  : ");
		int iValue = sobj.nextInt();
		
		int iArr[] = new int[iSize];
		
		Number obj = new Number();
		
		obj.Accept(iArr);
		boolean bRet = obj.Check(iArr,iValue);
		
		if(bRet == true)
		{
			System.out.println(iValue+" is present");
		}
		else
		{
			System.out.println(iValue+" is not present");
		}
	}
}