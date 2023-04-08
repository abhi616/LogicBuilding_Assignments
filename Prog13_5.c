#include<stdio.h>

int CountDiff(int iNo)
{
	int iDigit = 0, iEvenSum = 0, iOddSum = 0, iAns = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo > 0)
	{
      iDigit = iNo % 10;
	  
	  if(iDigit % 2 == 0)
	  {
		  iEvenSum = iEvenSum + iDigit;
	  }
	  else
	  {
		  iOddSum = iOddSum + iDigit;
	  }
	  
	  iNo = iNo / 10;
	}
	
	iAns = iEvenSum - iOddSum;
	
	return iAns;
}

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter number : \n");
	scanf("%d",&iValue);
	
	iRet = CountDiff(iValue);
	
    printf("Difference : %d\n",iRet);
	
	return 0;
}