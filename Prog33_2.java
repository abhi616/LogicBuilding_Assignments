import java.util.*;

class Digit
{
	public int CountOdd(int iNo)
	{
		int iCnt = 0, iDigit = 0;
		
		if(iNo < 0)
		{
			iNo = -iNo;
		}
		
		while(iNo > 0)
		{
			iDigit = iNo % 10;
			if(iDigit % 2 != 0)
			{
				iCnt++;
			}
			iNo = iNo / 10;
		}
		
		return iCnt;
	}
}

class Prog33_2
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter number  : ");
		int iValue = sobj.nextInt();
		
		Digit obj = new Digit();
		
		int iRet = obj.CountOdd(iValue);
		
		System.out.println("Total odd digits : "+iRet);
	}
}