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
	
	public void SumArray(int arr1[], int arr2[])
	{
		int iSum = 0;
		
		for(int i = 0; i < arr1.length; i++)
		{
			iSum = iSum + arr1[i];
		}
		
		System.out.println("Sum of first array element is "+iSum);
		
		iSum = 0;
		for(int i = 0; i < arr2.length; i++)
		{
			iSum = iSum + arr2[i];
		}
		
		System.out.println("Sum of second array element is "+iSum);
	}
}

class Prog41_5
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		int iSize1 = 0, iSize2 = 0;
		
		System.out.println("Enter size of first array : ");
		iSize1 = sobj.nextInt();
		
		int iArr1[] = new int[iSize1];
		
		System.out.println("Enter size of second array : ");
		iSize2 = sobj.nextInt();
		
		int iArr2[] = new int[iSize2];
		
		MyArray obj = new MyArray();
		
		System.out.println("Enter first array elements ");
		obj.Accept(iArr1);
		System.out.println("Enter second array elements ");
		obj.Accept(iArr2);
		
		obj.SumArray(iArr1,iArr2);
		
	}
}