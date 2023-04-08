#include<stdio.h>

int SumDigit(int iNo)
{
	int iDigit = 0,iSum = 0;
	if(iNo > 0)
	{
		iDigit = iNo % 10;
		iSum = iDigit + SumDigit(iNo/10);
	}
	
	return iSum;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number : ");
	scanf("%d",&iValue);
	
	iRet = SumDigit(iValue);
	
	printf("Sum of digits is : %d\n",iRet);
	
	return 0;
}