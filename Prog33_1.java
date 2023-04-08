import java.util.*;

class Digit
{
	public int CountEven(int iNo)
	{
		int iCnt = 0, iDigit = 0;
		
		if(iNo < 0)
		{
			iNo = -iNo;
		}
		
		while(iNo > 0)
		{
			iDigit = iNo % 10;
			if(iDigit % 2 == 0)
			{
				iCnt++;
			}
			iNo = iNo / 10;
		}
		
		return iCnt;
	}
}

class Prog33_1
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter number  : ");
		int iValue = sobj.nextInt();
		
		Digit obj = new Digit();
		
		int iRet = obj.CountEven(iValue);
		
		System.out.println("Total even numbers : "+iRet);
	}
}