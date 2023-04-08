#include<stdio.h>

int CountEven(int iNo)
{
	int iDigit = 0, iEvenCnt = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo > 0)
	{
      iDigit = iNo % 10;
	  if(iDigit % 2 == 0)
	  {
		  iEvenCnt++;
	  }
	  iNo = iNo / 10;
	}
	
	return iEvenCnt;
}

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter number : \n");
	scanf("%d",&iValue);
	
	iRet = CountEven(iValue);
	
    printf("Total even digit : %d\n",iRet);
	
	return 0;
}