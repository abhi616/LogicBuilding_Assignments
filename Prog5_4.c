#include<stdio.h>

int SumNonFact(int iNo)
{
	int iCnt = 0, iSum = 0;
	// Time Complexity : N
	
	iCnt = 1; 
	
	while(iCnt < iNo)
	{
		if(iNo % iCnt != 0)
		{
			iSum = iSum + iCnt;
		}
		iCnt++;
	}
	
	return iSum;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number :\n");
	scanf("%d",&iValue);
	
	iRet = SumNonFact(iValue);
	
	printf("%d\n",iRet);
	
	return 0;
}