#include<stdio.h>

int MaxDigit(int iNo)
{
	int iDigit = 0;
	static int iMax = 0;
	
	if(iNo > 0)
	{
		iDigit = iNo % 10;
		if(iDigit > iMax)
		{
			iMax = iDigit;
		}
		
		MaxDigit(iNo/10);
	}
	
	return iMax;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number : ");
	scanf("%d",&iValue);
	
	iRet = MaxDigit(iValue);
	
	printf("Largest digit is : %d\n",iRet);
	
	return 0;
}