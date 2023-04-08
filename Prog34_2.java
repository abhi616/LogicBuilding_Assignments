import java.util.*;

class Number
{
	public int FirstOccurence(int arr[], int No)
	{
		int i = 0, iFound = 0;
		
		for(i = 0; i < arr.length; i++)
		{
			if(arr[i] == No)
			{
				iFound++;
				break;
			}
		}
		
		if(iFound == 0)
		{
		  return -1;
		}
		else
		{
		  return i;
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

class Prog34_2
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
		int iRet = obj.FirstOccurence(iArr,iValue);
		
		if(iRet == -1)
		{
			System.out.println(iValue+" is not found");
		}
		else
		{
			System.out.println("First occurence of "+iValue+" is : "+iRet);
		}
	}
}