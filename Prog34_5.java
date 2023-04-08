import java.util.*;

class Number
{
	public int Product(int arr[])
	{	
        int iProduct = 1;	
		
		for(int i = 0; i < arr.length; i++)
		{
			if(arr[i] % 2 != 0)
			{
				iProduct = iProduct * arr[i];
			}
		}
		
		return iProduct;
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

class Prog34_5
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the size of array  : ");
		int iSize = sobj.nextInt();
		
		int iArr[] = new int[iSize];
		
		Number obj = new Number();
		
		obj.Accept(iArr);
		int iRet = obj.Product(iArr);	

        System.out.println("Product of odd elements : "+iRet);		
	}
}