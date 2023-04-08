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
	
	public int[] CopyArray(int arr[])
	{	
		int cpyArr[] = new int[arr.length];
		
		for(int i = 0; i < arr.length; i++)
		{
			cpyArr[i] = arr[i];
		}	
		
		return cpyArr;
	}
	
	public int[] ArrayConcate(int arr1[], int iSize1, int arr2[], int iSize2)
	{
		int concatArr[] = new int[iSize1+iSize2];
		
		int j = 0;
		
		for(int i = 0; i < arr1.length; i++)
		{
			concatArr[i] = arr1[i];
			j = i;
		}
		j++;
		for(int i = 0; i < arr2.length; i++, j++)
		{
			concatArr[j] = arr2[i];
		}
		
		int newArr[] = CopyArray(concatArr);
		
		return newArr;
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

class Prog42_4
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
		
		int arr[] = obj.ArrayConcate(iArr1,iSize1,iArr2,iSize2);
		
		System.out.println("New array is : ");
		obj.Display(arr);
		
	}
}