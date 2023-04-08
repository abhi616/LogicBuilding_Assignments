#include<stdio.h>

double SquareMeter(float fValue)
{
	double dAns = 0.0;
	
	dAns = fValue * 0.0929;
	
	return dAns;
}

int main()
{
	float fValue = 0.0;
	double dRet = 0.0;
	
	printf("Enter area in square foot : \n");
	scanf("%f",&fValue);
	
	dRet = SquareMeter(fValue);
	
	printf("Area in square meter : %f\n",dRet);
	
	return 0;
}