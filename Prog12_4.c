#include<stdio.h>

int CountFour(int iNo)
{
	int iDigit = 0, iFourCnt = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo > 0)
	{
      iDigit = iNo % 10;
	  if(iDigit == 4)
	  {
		  iFourCnt++;
	  }
	  iNo = iNo / 10;
	}
	
	return iFourCnt;
}

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter number : \n");
	scanf("%d",&iValue);
	
	iRet = CountFour(iValue);
	
    printf("Frequency of 4 is : %d\n",iRet);
	
	return 0;
}