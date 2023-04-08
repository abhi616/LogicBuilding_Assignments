#include<stdio.h>

void MultipleDisplay(int iNo)
{
	int iCnt = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(iCnt = 1; iCnt <= 5; iCnt++)
	{
		printf("%d ",iCnt*iNo);
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter number :\n");
	scanf("%d",&iValue);
	
	MultipleDisplay(iValue);
	
	return 0;
}