#include<stdio.h>

int KMtoMeter(int iNo)
{
	int iAns = 0;
	
	iAns = iNo * 1000;
	
	return iAns;
}

int main()
{
	int iValue = 0.0, iRet = 0.0;
	
	printf("Enter distance : \n");
	scanf("%d",&iValue);
	
	iRet = KMtoMeter(iValue);
	
	printf("Distance in meter is : %d\n",iRet);
	
	return 0;
}