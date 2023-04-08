#include<stdio.h>

float Percentage(int iNo1, int iNo2)
{
	float fPer = 0.0;
	
	if(iNo1 == 0 || iNo2 == 0)
    {
		return fPer;
	}
	
	fPer = iNo2 / iNo1;
	
	return fPer;
}

int main()
{
	int iValue1 = 0, iValue2 = 0;
	float fRet = 0.0;
	
	printf("Enter total marks : \n");
	scanf("%d",&iValue1);
	
	printf("Enter obtained marks : \n");
	scanf("%d",&iValue2);
	
	fRet = Percentage(iValue1,iValue2);
	
	printf("%d",fRet);
	
	return 0;
}