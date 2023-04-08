#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
	int iCnt = 0, iSum = 0;
	
	if(iStart > iEnd || iStart < 0 || iEnd < 0)
	{
		printf("Invalid Range\n");
	}
	else
	{	
		for(iCnt = iStart; iCnt <= iEnd; iCnt++)
		{
			iSum = iSum + iCnt;
		}
	}
	
	return iSum;
}

int main()
{
	int iValue1 = 0, iValue2 = 0, iRet = 0;
	
	printf("Enter starting point : \n");
	scanf("%d",&iValue1);
	
	printf("Enter Ending point : \n");
	scanf("%d",&iValue2);
	
	iRet = RangeSum(iValue1,iValue2);
	
	printf("Summation of all numbers : %d\n",iRet);
	
	return 0;
}