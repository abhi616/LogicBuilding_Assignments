import java.util.*;

class Digit
{
	public int CountRange(int iNo)
	{
		int iCnt = 0, iDigit = 0;
		
		if(iNo < 0)
		{
			iNo = -iNo;
		}
		
		while(iNo > 0)
		{
			iDigit = iNo % 10;
			if(iDigit > 3 && iDigit < 7)
			{
				iCnt++;
			}
			iNo = iNo / 10;
		}
		
		return iCnt;
	}
}

class Prog33_3
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter number  : ");
		int iValue = sobj.nextInt();
		
		Digit obj = new Digit();
		
		int iRet = obj.CountRange(iValue);
		
		System.out.println("Total digits in between 3 & 7 : "+iRet);
	}
}