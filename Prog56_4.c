#include<stdio.h>

int MinDigit(int iNo)
{
	int iDigit = 0;
	static int iMin = 0;
	static int i = 0;
	
	if(iNo > 0)
	{
		if(i == 0)
		{
			iMin = iNo % 10;
			i++;
		}
		iDigit = iNo % 10;
		if(iDigit < iMin)
		{
			iMin = iDigit;
		}
		
		MinDigit(iNo/10);
	}
	
	return iMin;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number : ");
	scanf("%d",&iValue);
	
	iRet = MinDigit(iValue);
	
	printf("Smallest digit is : %d\n",iRet);
	
	return 0;
}