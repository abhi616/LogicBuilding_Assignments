#include<stdio.h>

int Mult(int iNo)
{
	int iDigit = 0,iMult = 1;
	if(iNo > 0)
	{
		iDigit = iNo % 10;
		iMult = iDigit * Mult(iNo/10);
	}
	
	return iMult;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number : ");
	scanf("%d",&iValue);
	
	iRet = Mult(iValue);
	
	printf("Multiplication of digits is : %d\n",iRet);
	
	return 0;
}