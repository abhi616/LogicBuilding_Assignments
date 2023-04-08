import java.util.*;

class Number
{
	public int LastOccurence(int arr[], int No)
	{
		int i = 0, iFound = -1;
		
		for(i = 0; i < arr.length; i++)
		{
			if(arr[i] == No)
			{
				iFound = i;
			}
		}
		
		if(iFound == -1)
		{
		  return -1;
		}
		else
		{
		  return iFound;
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

class Prog34_3
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
		int iRet = obj.LastOccurence(iArr,iValue);
		
        System.out.println("Last occurence of "+iValue+" is : "+iRet);
	}
}