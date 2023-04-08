import java.util.*;

class Digit
{
	public int Difference(int iNo)
	{
		int iSum1 = 0, iSum2 = 0, iDigit = 0;
		
		if(iNo < 0)
		{
			iNo = -iNo;
		}
		
		while(iNo > 0)
		{
			iDigit = iNo % 10;
			
			if(iDigit % 2 == 0)
			{
				iSum1 = iSum1 + iDigit;
			}
			else
			{
				iSum2 = iSum2 + iDigit;
			}
			iNo = iNo / 10;
		}
		
		return iSum1 - iSum2;
	}
}

class Prog33_5
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter number  : ");
		int iValue = sobj.nextInt();
		
		Digit obj = new Digit();
		
		int iRet = obj.Difference(iValue);
		
		System.out.println("Difference : "+iRet);
	}
}