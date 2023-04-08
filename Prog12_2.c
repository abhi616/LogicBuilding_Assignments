#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
	int iDigit = 0, iZeroCnt = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo > 0)
	{
      iDigit = iNo % 10;
	  if(iDigit == 0)
	  {
		  iZeroCnt++;
	  }
	  iNo = iNo / 10;
	}
	
	if(iZeroCnt > 0)
	{
	  return 1;
	}
	else
	{
		return -1;
	}
}

int main()
{
	int iValue = 0;
	BOOL bRet = FALSE;
	
	printf("Enter number : \n");
	scanf("%d",&iValue);
	
	bRet = ChkZero(iValue);
	
	if(bRet == -1)
	{
		printf("There is no zero\n");
	}
	else
	{
		printf("It contains zero\n");
	}
	
	return 0;
}