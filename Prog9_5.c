#include<stdio.h>

int FactorialDiff(int iNo)
{
	int iCnt = 0, iOddFact = 1, iEvenFact = 1, iAns = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		if(iCnt % 2 == 0)
		{
		   iEvenFact = iEvenFact * iCnt;
		}
		else
		{
			iOddFact = iOddFact * iCnt;
		}
	}
	
	iAns = iEvenFact - iOddFact;
	return iAns ;
}

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter number : \n");
	scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Even & odd factorial difference is %d\n",iRet);

    return 0;	
}