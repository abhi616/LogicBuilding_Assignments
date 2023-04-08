import java.util.*;

class Digit
{
	public int Multiply(int iNo)
	{
		int iMult = 1, iDigit = 0;
		
		if(iNo < 0)
		{
			iNo = -iNo;
		}
		
		while(iNo > 0)
		{
			iDigit = iNo % 10;
			if(iDigit == 0)
			{
				iNo = iNo / 10;
				continue;
			}
			iMult = iMult * iDigit;
			iNo = iNo / 10;
		}
		
		return iMult;
	}
}

class Prog33_4
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter number  : ");
		int iValue = sobj.nextInt();
		
		Digit obj = new Digit();
		
		int iRet = obj.Multiply(iValue);
		
		System.out.println("Multiplication of all digits from "+iValue+" : "+iRet);
	}
}