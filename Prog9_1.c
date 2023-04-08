#include<stdio.h>

void Display(int iNo)
{
	int iCnt = 0;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(iCnt = 0;iCnt < iNo; iCnt++)
	{
		 printf("* ");	
	}
	
	for(iCnt = 0;iCnt < iNo; iCnt++)
	{
		 printf("# ");	
	}
	
		
}

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter number :\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}